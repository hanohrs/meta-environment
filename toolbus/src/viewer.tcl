#!/usr/local/bin/wish -f        			    -*- C -*-

# User interface for ToolBus viewer
#

# Call to the following functions are provided:
#
# create_proc: create a new process with given process-id and name
# create_tool: create a new tool instance with given tool-id and name
# update_var: update the value of a variable in a process
# delete_var: delete a variable from a process
# update_subs: update the subscriptions of a process
# update_notes: update the notes of a process
# proc_proc_comm: communication between processes pid1 and pid2
# proc_tool_comm: communication from process pid to tool tid
# tool_proc_comm: communication from tool tid to process pid
# monitor_atom:   execution of one atom

proc create_proc {pid name} {
  mk_process .tbviewer.canvas $name $pid
}

proc create_tool {tid name} {
  if { [string compare $name viewer] != 0 } {
      mk_tool .tbviewer.canvas $name $tid
  }
}

proc update_var {pid var val} {
#  puts stderr "update_var $pid $var $val\n"
  trace_update $pid "$var" "$val"
}

proc delete_var {pid var } {
#  puts stderr "delete_var $pid $var\n"
  delVar $pid "$var"
}

proc update_subs {pid subs} {
  trace_update $pid Subscr $subs
}

proc update_notes {pid notes} {
  trace_update $pid Notes $notes
}

# Note: for a binary communication between pid1 and pid2, we get
#    proc_proc_com pid1 pid2
# and
#    proc_proc_com pid2 pid1
# We do not draw (the same) connection for the second call.

proc proc_proc_comm {pid1 pid2 dir} {
   global last_pids
#   puts stderr "proc_proc_comm $pid1 $pid2 $dir\n"
   if {[lsearch $last_pids $pid2] < 0} {
      con_proc_proc .tbviewer.canvas $pid1 $pid2 $dir [llength $last_pids]
    }
}

proc proc_tool_comm {pid tid size} {
   global last_pids
#   puts stderr "proc_tool_comm $pid $tid\n"; flush stderr
   con_proc_tool .tbviewer.canvas $pid $tid 1 [llength $last_pids]
}

proc tool_proc_comm {pid tid size} {
   global last_pids
#   puts stderr "tool_proc_comm $pid $tid\n"; flush stderr
   con_proc_tool .tbviewer.canvas $pid $tid -1  [llength $last_pids]
}

# Maintain a global list of the process-ids received for which a
# "continue" message has to be generated

set last_pids {}

proc monitor_atom {pid atfun src blino bpos elino epos} {
     global tracer_state last_pids

#    puts stderr "monitor_atom: $pid $src $blino $bpos $elino $epos\n"
     set c .tbviewer.canvas
     lappend last_pids $pid

     act_proc $c $pid
     recordAtom $pid $src $blino $bpos $elino $epos

     if { [string compare $tracer_state(mode) step_mode] == 0|| \
          [lsearch $tracer_state(proc_breaks) $pid] >= 0 || \
          [lsearch $tracer_state(line_breaks) $blino] == 0 } {

        set $tracer_state(mode) step_mode
        enable

     } else {
       update idletasks
       after $tracer_state(delay)
       TBcontinue
     }
}

proc rec-terminate { n } {
  destroy .; exit
}
#-------------------------------------------------------------
# Set default options
#-------------------------------------------------------------

option add *Background ivory
option add *Foreground black

option add *selectForeground snow
option add *selectBackground SeaGreen

option add *activeForeground snow
option add *activeBackground SeaGreen

option add *Scrollbar.Foreground honeydew2
option add *Scrollbar.activeForeground SeaGreen

option add *Scale.Foreground honeydew2
option add *Scale.activeForeground SeaGreen

# option add *font "-adobe-palatino-medium-r-normal--17-120-100-100-p-89-iso8859-1"
option add *Text.font 8x13

set auto_path "$tk_library/demos $auto_path"

set tb_glob(xp0)    20;   # x coordinate of process 0
set tb_glob(rp)     15;   # radius of a process
set tb_glob(dx)     60;   # horizontal distance between columns
set tb_glob(dy)     60;   # vertical distance between rows
set tb_glob(maxcol) 10;   # max number of processes per row
set tb_glob(nrow)    1;   # current number of rows
set tb_glob(ybase) 160;
set tb_glob(tbase) 230;   # y coordinate of connection line for tool communication
set tb_glob(ntool)   0;   # current number of tools connected

proc drawBus {c} {
     global tb_glob
     set tb_glob(busbase) [expr (1 + $tb_glob(nrow)) * $tb_glob(dy)]
     $c create rectangle 10 10 \
                      [expr $tb_glob(xp0) + (1 + $tb_glob(maxcol))*$tb_glob(dx)] \
                      $tb_glob(busbase) \
                       -width 4 -tags rect
    set tb_glob(ybase) [expr $tb_glob(busbase) - $tb_glob(dy)/2]
    set tb_glob(tbase) [expr $tb_glob(busbase) + $tb_glob(dy)]
}

proc extend_bus {c} {
    global tb_glob tool_name
    $c delete tag rect
    drawBus $c
    set i 1
    while { $i <= $tb_glob(ntool) } {
       $c delete tag tool$i
       $c delete tag tool_txt$i
       $c delete tag tool_line$i
       mk_tool $c $tool_name($i) $i
       incr i
    }
}

proc set_name {name} {
    .tbviewer.buttons.name configure -text $name
}

proc reset_name {} {
    .tbviewer.buttons.name configure -text ""
}

proc mkViewer {} {
   global tb_glob

   set w .tbviewer
   toplevel $w

   wm minsize $w 10 10   

   label $w.help -text "Short Help Info" -relief raised -width 50
   defHelp $w.help "Help info"

   canvas $w.canvas -relief raised \
                    -width [expr (1 + $tb_glob(maxcol)) * $tb_glob(dx)] \
                    -height [expr ($tb_glob(maxcol)/2)*$tb_glob(dy)]
   defHelp $w.canvas \
   "Click on process to view its text ; Double click on process to view its variables"
   pack $w.help -side bottom -fill both
   pack $w.canvas -side bottom -expand 1 -fill both
   drawBus $w.canvas   

   frame $w.buttons
   label $w.buttons.txt -text "Name:"
   label $w.buttons.name -text "" -width 25 -anchor w
   button $w.buttons.go -text "Go" -command "do_go"
   button $w.buttons.stop -text "Stop" -command "do_stop" -state disabled
   button $w.buttons.step -text "Step" -command "do_step"
   pack $w.buttons -side bottom -expand 1 -fill both
   pack $w.buttons.txt $w.buttons.name -side left 
   pack $w.buttons.step $w.buttons.go $w.buttons.stop -side right -padx 10m
   defHelp $w.buttons.txt "Move cursor to process or tool to display its full name here"
   defHelp $w.buttons.name "Move cursor to process or tool to display its full name here"
 
   defHelp $w.buttons.go "Leave step mode and continue execution until next breakpoint"
   defHelp $w.buttons.stop "Stop current execution and enter step mode"
   defHelp $w.buttons.step "Execute one step in script"

   frame $w.menu -relief raised -bd 2
   pack $w.menu -side top -expand 1 -fill x
   text $w.text -relief raised -bd 2 -yscrollcommand "$w.scroll set" -setgrid 1 \
            -width 80 -height 14 -font "-Adobe-Helvetica-Medium-R-Normal-*-120-*"
   scrollbar $w.scroll -relief flat -command "$w.text yview"
   pack $w.scroll -side right -expand 1 -fill y
   pack $w.text -side left -expand 1 -fill x

   bind $w.text <Double-Button-1> "addBreak $w.text"
   defHelp $w.text "Double click to (re)set breakpoint on a line"
   defHelp $w.scroll "Scroll text of script"

   #Create Options menu
   menubutton $w.menu.options -text "Options" -underline 0 -menu $w.menu.options.t
   menu $w.menu.options.t
   $w.menu.options.t add command -label "ScreenDump" \
                     -underline 0 -command "ScreenDump $w.canvas"
   
   pack $w.menu.options -side left
   tk_menuBar $w.menu.options

#     puts stderr "mkViewer ... done\n"
}


proc newDelay {sc value} {
   set tracer_state(delay) $value
}

# list of current breakpoints
           
set tracer_state(delay) 150
set tracer_state(mode) step_mode
set tracer_state(line_breaks) {}
set tracer_state(proc_breaks) {}
set tracer_state(tool_breaks) {}

proc addBreak {w} {
     global tracer_state

     set lp [$w index insert]
     regexp {([0-9]+)\.([0-9]+)} $lp clp l p;
     set breaks $tracer_state(line_breaks)
     set i [lsearch $breaks $l]
     if { $i < 0 } {     
        lappend tracer_state(line_breaks) $l
        $w tag add break $l.0 [expr $l + 1].0
        $w tag configure break -foreground Red
     } else {
         set tracer_state(line_breaks) [lreplace $breaks $i $i]
         $w tag remove break $l.0 [expr $l + 1].0       
     }
}

proc delBreak {w} {
     global tracer_state

     set lp [$w index insert]
     regexp {([0-9]+)\.([0-9]+)} $lp clp l p
     set breaks $tracer_state(line_breaks)
     set i [lsearch $breaks $l]
     if { $i >= 0 } {
         set  $tracer_state(line_breaks) [lreplace $breaks $i $i]
         $w tag remove break $l.0 [expr $l + 1].0
     }
}

proc disable {} {
      .tbviewer.buttons.step configure -state disabled
      .tbviewer.buttons.go configure -state disabled
}

proc enable {} {
      .tbviewer.buttons.step configure -state normal
      .tbviewer.buttons.go configure -state normal
}

proc TBcontinue {} {
      global last_pids
      disable
# puts stderr "****** TBcontinue last_pids: $last_pids\n"
      foreach pid $last_pids {
           TBsend "snd-continue($pid)"
      }
      passive .tbviewer.canvas
      set last_pids {}
}

proc do_step {} {
     global tracer_state
     set tracer_state(mode) step_mode
     .tbviewer.buttons.stop configure -state normal
     TBcontinue
}

proc do_go {} {
     global tracer_state
     set tracer_state(mode) go_mode
     .tbviewer.buttons.stop configure -state normal
     TBcontinue
}

proc do_stop {} {
     global tracer_state
     .tbviewer.buttons.stop configure -state disabled
     set tracer_state(mode) step_mode
}

set current_src "INIT"

proc recordAtom {pid src blino bpos elino epos} {
     global current_src atoms

     set atoms($pid) [list $src $blino $bpos $elino $epos]
# puts stderr "recordAtom, pid=$pid\n"
     if {[string compare $src $current_src] != 0 && \
         [string compare $current_src "INIT"] == 0} {
       load_text $src
     }
     if {[string compare $src $current_src] == 0} {
        .tbviewer.text tag delete atom$pid
        .tbviewer.text tag add atom$pid $blino.$bpos $elino.$epos
        .tbviewer.text tag configure atom$pid -foreground blue
   }
}

proc gotoAtom {w pid} {
     global current_src atoms

     if { [info exists atoms($pid)] } {
        set descr $atoms($pid)
# puts stderr "gotoAtom, descr = $descr\n"
        set src [lindex $descr 0]

        if {[string compare $src $current_src] != 0 && \
           [string compare $src "INIT"] != 0} {
           load_text $src
        }
        .tbviewer.text yview -pickplace [.tbviewer.text index atom$pid.first]
     }
   }

proc load_text {filename} {
   global current_src atoms

  .tbviewer.text delete 0.0 end
  set file [open $filename r]
  if { $file < 0 } {
    puts stderr "Can't open file: $filename\n"
  } else {
    wm title .tbviewer "ToolBus Viewer ($filename)"
    while {![eof $file]} {
       .tbviewer.text insert end [read $file 1000]
    }
  }
  set current_src $filename
  foreach p [array names atoms] {
    set pdescr $atoms($p)
    set psrc   [lindex $pdescr 0]   
    if {[string compare $psrc $current_src] == 0} {
       set blino [lindex $pdescr 1]
       set bpos  [lindex $pdescr 2]
       set elino [lindex $pdescr 3]
       set epos  [lindex $pdescr 4]
       
       .tbviewer.text tag add atom$p $blino.$bpos $elino.$epos
       .tbviewer.text tag configure atom$p -foreground blue
     }
  }
}

set colors(proc,inactive) DarkSlateGray4
set colors(proc,active) DarkSlateGray2
set colors(tool,inactive) PaleVioletRed4
set colors(tool,active)  PaleVioletRed1

proc row {index} {
     global tb_glob
        return [expr 1 + int(floor([expr $index / $tb_glob(maxcol)]))]
}

proc col {index} {
     global tb_glob
     return [expr $index % $tb_glob(maxcol)]
}

proc mk_process {c name index} {
        global xpcon ypcon colors tb_glob proc_vars proc_names
# puts stderr "mk_process $c $name $index\n"

        set x [expr $tb_glob(xp0) + $tb_glob(dx) + [col $index]* $tb_glob(dx)]
        set y [expr [row $index] * $tb_glob(dy)]
        set rp $tb_glob(rp)
       
    	$c create oval [expr $x - $rp] [expr $y - $rp ] \
	               [expr $x + $rp] [expr $y + $rp] \
		       -outline Black -width 2 -fill $colors(proc,inactive)\
		       -tags "proc$index proc"
        $c bind proc$index <Button> "gotoAtom $c $index" ;# "addProcBreak $c $index"
        $c bind proc$index <Double-Button> "addProcVars $name $index"
        
        set bname [string range $name 0 4]
        $c create text $x [expr $y - $rp - 10] -text $bname -tags "pname$index"
        $c bind proc$index <Enter> "+set_name $name"
        $c bind proc$index <Leave> "+reset_name"

        set xpcon($index) $x
        set ypcon($index) $y
        if { [row $index] > $tb_glob(nrow) } {
           set tb_glob(nrow) [row $index]
           extend_bus $c
        }
        set proc_vars($index) {}
        set proc_names($index) $name
}

proc addProcBreak {c index} {
     global tracer_state

     set breaks $tracer_state(proc_breaks)
     set i [lsearch $breaks $index]
     if { $i < 0 } {     
        lappend tracer_state(proc_breaks) $index
        $c itemconfigure proc$index -outline Red
     } else {
         set tracer_state(proc_breaks) [lreplace $breaks $i $i] 
        $c itemconfigure proc$index -outline Black
     }
}

proc addProcVars {name index} {
   global proc_vars

   set w .vars$index
   if { [winfo exists $w] } {
      raise $w
   } else {
     toplevel $w
     wm title $w "$name"
     wm minsize $w 10 10
     button $w.quit -text "close" -command "destroy $w"
     pack $w.quit -side top
     defHelp $w.quit "Close view on variables op process $name"
     defHelp $w "View on variables of process $name"
     foreach var $proc_vars($index) {
       addVar $index $var
     }
   }
}

# Given a variable name of the form ``var$proc:type'' return ``var''
# if proc is equal to the current process name,
# otherwise return var$proc

proc stripVar {var pname} {
   if { [regexp {([^$]+)\$([a-zA-Z0-9\-]+):([a-zA-Z0-9\-]+)\??} $var varn pre post type] } {
      if { $post == $pname } {return $pre} else {return "$pre ($post)"}
    } else {
      return $var
    }
 }

proc unquestVar {var} {
   return [string trim $var "?"]
}
   
proc addVar {index var} {
   global proc_vals proc_names

   if { [winfo exists .vars$index] } {
     set f .vars$index.f_[string tolower $var]
     if { ![winfo exists $f] } {
        frame $f
        set svar [stripVar $var $proc_names($index)]
        label $f.name -text $svar
        label $f.val -textvariable proc_vals($index,$var) -relief sunken -anchor w
      }
     pack  $f.name $f.val -side left -anchor w
     pack $f -side top -anchor w
   }
}

proc delVar {index var} {
   global proc_vals proc_names proc_vars

   set var [unquestVar $var]
   set i [lsearch $proc_vars($index) $var]
   set proc_vars($index) [lreplace $proc_vars($index) $i $i]
   set proc_vals($index,$var) undefined
   set f .vars$index.f_[string tolower $var]
   pack forget $f
}

proc trace_update {index var val} {
  global proc_vars proc_vals

  set var [unquestVar $var]
  set proc_vals($index,$var) $val
  if { [info exists proc_vars($index)] } {
     if { [lsearch $proc_vars($index) $var] < 0 } {
        lappend proc_vars($index) $var
        addVar $index $var
     }
   }
}

proc mk_tool {c name index} {
        global xtcon colors tb_glob tool_name

        set xt0 [expr $tb_glob(xp0) - $tb_glob(dx) / 2]

        set x [expr $xt0 + $index * $tb_glob(dx)]
        set y  $tb_glob(tbase)
        set rp $tb_glob(rp)
    	$c create rectangle  [expr $x - $rp] [expr $y - $rp ] \
	               [expr $x + $rp] [expr $y + $rp] \
		       -outline black -width 2 -fill $colors(tool,inactive) \
		       -tags "tool$index tool"
        $c bind tool$index <Button-1> "addToolBreak $c $index"
        $c create text $x [expr $y + $rp + 10] -text $name -tags "tool_txt$index"
        $c create line $x [expr $y - $rp] $x $tb_glob(busbase) -width 1.5 \
	               -tags "tool_line$index"

        set tool_name($index) $name
        set xtcon($index) $x
        if { $index > $tb_glob(ntool) } {
           set tb_glob(ntool) $index
        }
}

proc addToolBreak {c index} {
     global tracer_state

     set breaks $tracer_state(tool_breaks)
     set i [lsearch $breaks $index]
     if { $i < 0 } {     
        lappend tracer_state(tool_breaks) $index
        $c itemconfigure tool$index -outline Red
     } else {
         set tracer_state(tool_breaks) [lreplace $breaks $i $i] 
        $c itemconfigure tool$index -outline Black
     }
}

proc con_proc_tool {c ip it dir nbreak} {
        global xpcon ypcon xtcon tb_glob

	if {![info exists xpcon($ip)] || ![info exists xtcon($it)]} {
	  return
        }
        set ybase [expr $tb_glob(ybase) + 3 * $nbreak]
        set rp $tb_glob(rp)

        if {$dir > 0} { set where last } else { set where first }
        if {$xpcon($ip) < $xtcon($it)} {
           set d 1
        } else {
           set d -1
        }
	set fac 1.8
        $c create line [expr $xpcon($ip) + $d*$rp] $ypcon($ip) \
                       [expr $xpcon($ip) + $d*$fac*$rp] $ypcon($ip) \
                       [expr $xpcon($ip) + $d*$fac*$rp] $ybase \
                       $xtcon($it) $ybase \
                       $xtcon($it) $tb_glob(busbase) \
                       -arrow $where -width 1.5 -tags connect
}

proc con_proc_proc {c ip1 ip2 dir nbreak} {
        global xpcon ypcon tb_glob

        set  ybase [expr $tb_glob(ybase) - 3 * $nbreak]
        if {$dir > 0} { set where last } else { set where first }
	if {![info exists xpcon($ip1)] || ![info exists xpcon($ip2)]} {
	  return
        }
        if { $xpcon($ip1) > $xpcon($ip2) } {
           set d -1
        } else {
           set d 1
        }
        set rp $tb_glob(rp)
	set fac 1.8
        if {[col $ip1] == [col $ip2]} {       
        $c create line [ expr $xpcon($ip1) + $rp ] $ypcon($ip1) \
                       [ expr $xpcon($ip1) + $fac*$rp ] $ypcon($ip1) \
                      [ expr $xpcon($ip2) + $fac*$rp ] $ypcon($ip2) \
                       [ expr $xpcon($ip2) + $rp ] $ypcon($ip2) \
                       -arrow $where -width 1.5 -tags connect
        } elseif { abs([col $ip1] - [col $ip2]) == 1} {

        $c create line [ expr $xpcon($ip1) + $d*$rp ] $ypcon($ip1) \
                       [ expr $xpcon($ip1) + $d*$fac*$rp ] $ypcon($ip1) \
                       [ expr $xpcon($ip2) - $d*$fac*$rp ] $ypcon($ip2) \
                       [ expr $xpcon($ip2) - $d*$rp ] $ypcon($ip2) \
                       -arrow $where -width 1.5 -tags connect

        } else {

        $c create line [ expr $xpcon($ip1) + $d*$rp ] $ypcon($ip1) \
                       [ expr $xpcon($ip1) + $d*$fac*$rp ] $ypcon($ip1) \
                       [ expr $xpcon($ip1) + $d*$fac*$rp ] $ybase \
                       [ expr $xpcon($ip2) - $d*$fac*$rp ] $ybase \
                       [ expr $xpcon($ip2) - $d*$fac*$rp ] $ypcon($ip2) \
                       [ expr $xpcon($ip2) - $d*$rp ] $ypcon($ip2) \
                       -arrow $where -width 1.5 -tags connect
      }
}

set screen_cnt 1

proc ScreenDump {w} {
     global screen_cnt
     $w postscript -file screen$screen_cnt.eps -colormode color
     incr screen_cnt
}

proc act_proc {c ip} {
        global colors

        if { $ip >= 0} {
           $c itemconfigure proc$ip -fill $colors(proc,active)
        }
}

proc act_tool {c it} {
        global colors
    
        if {$it >= 0} {
           $c itemconfigure tool$it -fill $colors(tool,active)
        }
}

proc passive {c} {
        global colors act_procs act_tools last_pids     
        $c delete tag connect

        $c itemconfigure tool -fill $colors(tool,inactive)
        $c itemconfigure proc -fill $colors(proc,inactive)

        .tbviewer.text tag delete atom
#	foreach pid $last_pids {
#	  .tbviewer.text tag delete atom$pid
#	}
}

#-----------------------------------------------

proc defHelp {w t} {
    global helpTopics
    set helpTopics($w) $t
}

proc Help {topic {x 0} {y 0}} {
    global helpTopics helpCmds

    while {[info exists helpCmds($topic)]} {
        set topic [eval $helpCmds($topic)]
    }
    if [info exists helpTopics($topic)] {
        set msg $helpTopics($topic)
    } else {
        set msg ""
    }
    .tbviewer.help configure -text $msg
}

bind all <Any-Enter> {+Help [winfo containing %X %Y] %X %Y}
bind Button <Any-Enter> {+Help [winfo containing %X %Y] %X %Y}
bind Scrollbar <Any-Enter> {+Help [winfo containing %X %Y] %X %Y}
bind all <Any-Leave> {+.tbviewer.help configure -text ""}

wm withdraw .      ; # withdraw the main window of wish

mkViewer

