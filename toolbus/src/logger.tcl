#!/usr/local/bin/wish -f        			    -*- C -*-

# User interface for ToolBus logger

# The following functions are called by the wish-adapter:
#
# create_proc: create a new process with given process-id and name
# create_tool: create a new tool instance with given tool-id and name
# update_var: update the valut of a variable in a process
# update_subs: update the subscriptions of a process
# update_notes: update the notes of a process
# proc_proc_comm: communication between processes pid1 and pid2
# proc_tool_comm: communication from process pid to tool tid
# tool_proc_comm: communication from tool tid to process pid
# monitor_atom: execute an atom

# procs(pid)      = name
# procs(name,inst) = # instances
# procs(name,natom) = total # of atoms

# set procs(0) INIT
# set procs(INIT,inst) 1
# set procs(INIT,natom) 0

# tools(tid)       = name
# tools(name,inst) = # instances
# tools(name,natom) = total # of atoms
# tools(name,size) = total volume (bytes) of communication

proc create_proc {pid name} {
  global procs

  if { [info exists procs($name,inst)] } {
     incr procs($name,inst)
     set procs($pid) $name
  } else {
     set procs($name,inst) 1
     set procs($name,natom) 0
     set procs($pid) $name
     add_proc $name
   }
}

proc create_tool {tid name} {
  global tools
  if { [info exists tools($name,inst)] } {
     incr tools($name,inst)     
     set tools($tid) $name
  } else {
     set tools($name,inst) 1
     set tools($name,natom) 0
     set tools($name,size) 0
     set tools($tid) $name
     add_tool $name
   }
}

proc update_var {pid var val} {
}

proc update_subs {pid subs} {
}

proc update_notes {pid notes} {
}

# Note: for a binary communication between pid1 and pid2, we get
#    proc_proc_com pid1 pid2
# and
#    proc_proc_com pid2 pid1
# We do not draw (the same) connection for the second call.

proc proc_proc_comm {pid1 pid2 dir} {
}

proc proc_tool_comm {pid tid size} {
   global tools
   incr tools($tools($tid),size) $size
}

proc tool_proc_comm {pid tid size} {   
   global tools
   incr tools($tools($tid),size) $size
}

proc monitor_atom {pid atfun src blino bpos elino epos} {
   global procs

   if { [info exists procs($pid)] } {
      incr procs($procs($pid),natom)
   }
   TBsend "snd-continue($pid)"
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

proc mkLogger {} {

   set w .logprocs
   toplevel .logprocs
   set f .logprocs.title
   frame $f
   label $f.name -text Name -width 10
   label $f.inst -text "# inst" -width 10
   label $f.natom -text "# atoms" -width 10
   pack $f.name $f.inst $f.natom -side left -anchor w
   pack $f -side top -anchor w   

   wm title .logprocs "Process Logger"
   wm minsize .logprocs 10 10

   toplevel .logtools
   set f .logtools.title
   frame $f
   label $f.name -text Name -width 10
   label $f.inst -text "# inst" -width 10
   label $f.size -text "# bytes" -width 10
   pack $f.name $f.inst $f.size -side left -anchor w
   pack $f -side top -anchor w   
   
   wm title .logtools "Tool Logger"
   wm minsize .logtools 10 10

   puts stderr "mkLogger ... done\n"
}

proc add_proc {name} {
     global procs

     set f .logprocs.proc-$name
     frame $f
     label $f.name -text $name -width 10
     label $f.inst -textvariable procs($name,inst) -width 10 -relief sunken -anchor w
     label $f.natom -textvariable procs($name,natom) -width 10 -relief sunken -anchor w
     pack $f.name $f.inst $f.natom -side left -anchor w
     pack $f -side top -anchor w
}

proc add_tool {name} {
     global tools
     set f .logtools.tool-$name
     frame $f
     label $f.name -text $name -width 10
     label $f.inst -textvariable tools($name,inst) -width 10 -relief sunken -anchor w
     label $f.size -textvariable tools($name,size) -width 10 -relief sunken -anchor w
     pack $f.name $f.inst $f.size -side left -anchor w
     pack $f -side top -anchor w
}

wm withdraw .      ; # withdraw the main window of wish

mkLogger
create_proc 0 INIT
