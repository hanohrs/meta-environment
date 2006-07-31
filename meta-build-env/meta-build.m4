
dnl META_ left in configure is the sign a macro was not defined, or there was 
dnl a typo in a macro invocation.
m4_pattern_forbid([^META_])
m4_pattern_allow([^META_STUDIO])
m4_pattern_allow([^_PKG_ERRORS])

dnl META_SETUP()
dnl ------------
dnl Invokes all macros that always need to be invoked for a package.
dnl
AC_DEFUN([META_SETUP],
[
  AC_REQUIRE([META_RECURSIVE_REQUIRES])
  AC_PREREQ([2.59])
  AC_CONFIG_SRCDIR([configure])
   
  AM_INIT_AUTOMAKE(META_GET_PKG_VAR([Name]),META_GET_PKG_VAR([Version]))
  AC_CONFIG_FILES(META_GET_PKG_VAR([Name]).pc,META_GENERATE_UNINSTALLED_PC(META_GET_PKG_VAR([Name])))

  dnl We automatically generate Makefile for all Makefile.am's:
  AC_CONFIG_FILES(esyscmd([find . -name "Makefile.am" | sed "s#\.am##"]))

  AM_MAINTAINER_MODE

  AC_MSG_CHECKING([whether CFLAGS is set])
  if test "${CFLAGS+set}" = set; then
    AC_MSG_RESULT([yes])
  else
    if  test "$USE_MAINTAINER_MODE" = "yes"; then
      CFLAGS="-Wall -Werror -g -O2"
      AC_MSG_RESULT([no, setting to maintainer default ($CFLAGS)])
    else
      AC_MSG_RESULT([no])
    fi
  fi

  META_BUNDLE_PKG_CONFIG_PATH

  EXTERNAL_JARS=" "
  TOOLBUSFLAGS=" "
  META_REQUIRE_PACKAGES(META_GET_PKG_VAR_LIST([Requires]))
  AC_SUBST([EXTERNAL_JARS])
  AC_SUBST([EXTERNAL_INSTALLED_JARS])
  AC_SUBST([TOOLBUSFLAGS])
])


dnl META_REQUIRE_PACKAGES(MODULES)
dnl -----------------------------
dnl
AC_DEFUN([META_REQUIRE_PACKAGES],
[
  dnl First, construct the entire PKG_CONFIG_PATH
  AC_FOREACH([Dep],[$1],[META_ARG_WITH_PACKAGE(Dep)])

  dnl Next, let pkg-config locate the packages (and report nice errors)
  AC_FOREACH([Dep],[$1],[META_CHECK_PACKAGE(Dep)])

  dnl Finally, collect our custom information about the package.
  AC_FOREACH([Dep],[$1],[META_INSPECT_PACKAGE(Dep)])
])

dnl META_REQUIRE_PACKAGE(MODULE)
dnl ----------------------------
dnl
AC_DEFUN([META_REQUIRE_PACKAGE],
[
  META_REQUIRE_PACKAGES([$1])
])

dnl META_ARG_WITH_PACKAGE(MODULE)
dnl -----------------------------
dnl Declares the option --with-OPTION=ARGNAME to specify the location of the package
dnl Extends the PKG_CONFIG_PATH if a location was given.
dnl
AC_DEFUN([META_ARG_WITH_PACKAGE],
[m4_pushdef([AC_Var], AS_TR_CPP([$1]))dnl
  AC_ARG_WITH([$1],
            [AS_HELP_STRING([--with-$1=DIR], [use $1 at DIR @<:@find with pkg-config@:>@])],
	    [AC_Var[]_PREFIX=$withval],
	    [])
  AC_MSG_CHECKING([whether location of $1 is explicitly set using --with-$1])
  if test "${AC_Var[]_PREFIX:+set}" = set; then
    AC_MSG_RESULT([yes])
    TMP_PKGCONFIG_PATH="$AC_Var[]_PREFIX/lib/pkgconfig"
    META_IF_CONTAINS([${PKG_CONFIG_PATH}],[${TMP_PKGCONFIG_PATH}],[
      PKG_CONFIG_PATH="${TMP_PKGCONFIG_PATH}:${PKG_CONFIG_PATH}"
    ])
    export PKG_CONFIG_PATH
    TMP_PKGCONFIG_DEPS=META_INSTALLED_PKG_CONFIG_PATH(${TMP_PKGCONFIG_PATH}/$1.pc)
    for deppath in ${TMP_PKGCONFIG_DEPS}; do
      META_IF_CONTAINS([${PKG_CONFIG_PATH}],[${deppath}],[
        PKG_CONFIG_PATH="${deppath}:${PKG_CONFIG_PATH}"
      ])
    done
    export PKG_CONFIG_PATH
  else
    AC_MSG_RESULT([no])
  fi
m4_popdef([AC_Var])dnl
])

dnl META_CHECK_PACKAGE(MODULE)
dnl --------------------------
dnl
AC_DEFUN([META_CHECK_PACKAGE],
[m4_pushdef([AC_Var], AS_TR_CPP([$1]))dnl
  PKG_CHECK_MODULES(AC_Var,[$1])
m4_popdef([AC_Var])dnl
])

dnl META_INSPECT_PACKAGE(MODULE)
dnl ----------------------------
dnl
dnl Checks the existance of package 'MODULE' and sets the variables:
dnl
dnl   PACKAGE_PREFIX: installation prefix of package.
dnl   PACKAGE_CFLAGS: CFLAGS for package
dnl   PACKAGE_LIBS: native libraries to link with
dnl   PACKAGE_JARS: JARS to use at build time.
dnl   PACKAGE_INSTALLED_JARS: JARS to use after installation.
dnl   PACKAGE_TOOLBUSFLAGS: flags for ToolBus interpreter
dnl
dnl and extends the variables:
dnl
dnl   EXTERNAL_JARS: JARS to use at build time.
dnl   EXTERNAL_INSTALLED_JARS: JARS to use after installation.
dnl
AC_DEFUN([META_INSPECT_PACKAGE],
[m4_pushdef([AC_Var], AS_TR_CPP([$1]))dnl
  AC_ARG_VAR(AC_Var[]_PREFIX, [prefix for $1, overriding pkg-config])dnl

  AC_MSG_CHECKING([prefix of package $1])
  AC_Var[]_FOUND_PREFIX=$($PKG_CONFIG --variable=prefix "$1")
  if test -z "$AC_Var[]_FOUND_PREFIX"; then
    AC_MSG_ERROR([package $1 does not specify its prefix in the pkg-config file.
           Report this error to the maintainer of this package.])
  fi

  if test "${AC_Var[]_PREFIX:+set}" = set; then
    AC_MSG_RESULT([explicitly set: $AC_Var[]_PREFIX])

    AC_MSG_CHECKING([if package $1 at this prefix equals the explicitly set package])
    # in a bundle, the package will not yet be installed.
    if test "${meta_bundled_packages:+set}" = set; then
        AC_MSG_RESULT([skipped (bundle)])
    else
      # compare found prefix to the actual prefix out of the .pc file at the given prefix
      if test -e "$AC_Var[]_PREFIX/lib/pkgconfig/$1.pc"; then
        AC_Var[]_ACTUAL_PREFIX="$(grep 'prefix=.*' $AC_Var[]_PREFIX/lib/pkgconfig/$1.pc | cut -f2 -d= | tr -d '@<:@:blank:@:>@')"
        if test "x$AC_Var[]_ACTUAL_PREFIX" = "x$AC_Var[]_FOUND_PREFIX"; then
          AC_MSG_RESULT([yes])
        else
          AC_MSG_RESULT([no])
          AC_MSG_ERROR([prefix of $1 explicitly set to $AC_Var[]_PREFIX,
            but pkg-config found $1 at $AC_Var[]_FOUND_PREFIX.
            Please check your PKG_CONFIG_PATH, or remove $2 from $AC_Var[]_FOUND_PREFIX, 
            or install the packages at a unique location.])
        fi
      else
        AC_MSG_RESULT([cannot check])
        AC_MSG_ERROR([$2 does not provide a pkg-config file at $AC_Var[]_PREFIX/lib/pkgconfig/$1.pc. Please check your installation.])
      fi
    fi
  else
    AC_MSG_RESULT([$AC_Var[]_FOUND_PREFIX])
  fi

  AC_Var[]_PREFIX="$AC_Var[]_FOUND_PREFIX"

  AC_SUBST(AC_Var[]_CFLAGS)
  AC_SUBST(AC_Var[]_LIBS)
  AC_SUBST(AC_Var[]_PREFIX)

  AC_MSG_CHECKING([the transitive closure of dependencies of $1])
  meta_dependencies=$(meta_requires $1)
  AC_MSG_RESULT([$meta_dependencies])

  META_INSPECT_PACKAGE_JARS([$1],[AC_Var],[${meta_dependencies}])
  META_INSPECT_PACKAGE_TOOLBUSFLAGS([$1],[AC_Var],[${meta_dependencies}])

m4_popdef([AC_Var])dnl
])

dnl META_INSPECT_PACKAGE_JARS(PACKAGE,PACKAGEVAR,DEPENDENCIES)
dnl
dnl PACKAGE: the name of the package to check 
dnl PACKAGEVAR: the names of the variable prefix
dnl DEPENDENCIES: the transitive dependencies of the package
AC_DEFUN([META_INSPECT_PACKAGE_JARS],[
  AC_MSG_CHECKING([if $1 provides jars])
  AC_Var[]_JARS=""
  for d in $3; do
    TMP_JARS=`echo META_INSTALLED_PKG_VAR([$d],[Jars]) | tr ',' ' '`
    TMP_UNINSTALLED_JARS=`echo META_INSTALLED_PKG_VAR([$d],[UninstalledJars]) | tr ',' ' '`

    if test "x${TMP_UNINSTALLED_JARS}" = "x" ; then
      TMP_UNINSTALLED_JARS="${TMP_JARS}"
    fi

    if test "x${TMP_JARS}" != "x" ; then
       for j in ${TMP_JARS}; do
         $2[]_INSTALLED_JARS="$$2[]_INSTALLED_JARS:$[]j"
         META_IF_CONTAINS([${EXTERNAL_INSTALLED_JARS}],[$j],[
            EXTERNAL_INSTALLED_JARS="${EXTERNAL_INSTALLED_JARS}:$[]j"
         ])
       done

       for j in ${TMP_UNINSTALLED_JARS}; do
         $2[]_JARS="$$2[]_JARS:$[]j"
         META_IF_CONTAINS([${EXTERNAL_JARS}],[$j],[
            EXTERNAL_JARS="${EXTERNAL_JARS}:$[]j"
         ])
       done
    fi
  done

  if test -z "${$2[]_JARS}"; then
    AC_MSG_RESULT([no])
  else
    AC_MSG_RESULT([$$2[]_JARS])
  fi

  AC_SUBST($2[]_JARS)
  AC_SUBST($2[]_INSTALLED_JARS)
])

dnl META_INSPECT_PACKAGE_TOOLBUSFLAGS(PACKAGE,PACKAGEVAR,DEPENDENCIES)
dnl
dnl PACKAGE: the name of the package to check 
dnl PACKAGEVAR: the names of the variable prefix
dnl DEPENDENCIES: the transitive dependencies of the package
AC_DEFUN([META_INSPECT_PACKAGE_TOOLBUSFLAGS],[
  AC_MSG_CHECKING([if $1 provides ToolBus flags])

  $2[]_TOOLBUSFLAGS=""
  for d in $3; do
    TMP_TOOLBUSFLAGS=$($PKG_CONFIG --variable=ToolBusFlags "$1" $d)
    TMP_TOOLBUSFLAGS=$(echo "${TMP_TOOLBUSFLAGS}" | sed 's@-I\w*\/@-I\/@g')

    if test "x${TMP_TOOLBUSFLAGS}" != "x" ; then
      for i in ${TMP_TOOLBUSFLAGS}; do
        META_IF_CONTAINS($$2[]_TOOLBUSFLAGS,[ $i],
          $2[]_TOOLBUSFLAGS="${$2[]_TOOLBUSFLAGS} $[]i"
        )
        META_IF_CONTAINS([${TOOLBUSFLAGS}],[ $i ],[
          TOOLBUSFLAGS="${TOOLBUSFLAGS} $[]i "
        ])
      done
    fi
  done

  if test -z "${$2[]_TOOLBUSFLAGS}"; then
    AC_MSG_RESULT([no])
  else
    AC_MSG_RESULT([yes])
  fi

  AC_SUBST($2[]_TOOLBUSFLAGS)
])

dnl META_BUNDLE_PKG_CONFIG_PATH()
dnl -----------------------------
dnl Sets the PKG_CONFIG_PATH if this package is in a bundle.
dnl
AC_DEFUN([META_BUNDLE_PKG_CONFIG_PATH],
[
  AC_ARG_WITH([bundled-packages],
    [AS_HELP_STRING([--with-bundled-packages=PKGS], [package is installed from a bundle of PKGS @<:@none@:>@])],
    [meta_bundled_packages=$withval],
    [meta_bundled_packages=])

  AC_MSG_CHECKING([if PKG_CONFIG_PATH needs to be extended for bundled packages])
  if test "${meta_bundled_packages:+set}" = set; then
    for pkg in $meta_bundled_packages; do
      PKG_CONFIG_PATH="$(dirname $(pwd))/$pkg:${PKG_CONFIG_PATH}"
    done
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
  fi
])

dnl META_REQUIRE_SOFTWARE(MODULE,WITNESS-PROGRAM)
dnl -----------------------------
dnl Check for a third party dependency
AC_DEFUN([META_REQUIRE_SOFTWARE],
[m4_pushdef([AC_Var], AS_TR_CPP([$1]))dnl
AC_ARG_WITH([$1],
            [AS_HELP_STRING([--with-$1=DIR], [use $1 at DIR @<:@find $2 in path@:>@])],
	    [AC_Var[]_PREFIX=$withval],
	    [])

  AC_MSG_CHECKING([whether location of $1 is explicitly set using --with-$1])
  if test "${AC_Var[]_PREFIX:+set}" = set; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_CHECKING([for installed $2 program])
    AC_PATH_PROGS(AC_Var[]_PREFIX,$2,[no])
    if test "x$AC_Var[]_PREFIX" = "xno" ; then
      AC_MSG_RESULT([no])
      AC_MSG_ERROR([Required software \"$1\" not found.])
    else
      AC_Var[]_PREFIX=`dirname \`dirname $AC_Var[]_PREFIX\``
      AC_MSG_RESULT([yes])
    fi
  fi
m4_popdef([AC_Var])dnl
])

dnl META_JAVA_SETUP()
dnl -----------------
dnl Sets up variables for a standard Java package
dnl
AC_DEFUN([META_JAVA_SETUP],[
  JAVA=java
  AC_SUBST([JAVA])

  JAVA_JAR=META_GET_PKG_USER_VAR([JarFile])
  AC_SUBST([JAVA_JAR])

  JAVA_PACKAGES=META_GET_PKG_USER_VAR([Packages])
  AC_SUBST([JAVA_PACKAGES])

  JAVA_LOCAL_JARS=`echo META_GET_PKG_USER_VAR([LocalJars]) | tr ',' ' '`
  AC_SUBST([JAVA_LOCAL_JARS])

  JAVA_MAIN_CLASS=META_GET_PKG_USER_VAR([MainClass])
  AC_SUBST([JAVA_MAIN_CLASS])

  JAVA_TEST_CLASS=META_GET_PKG_USER_VAR([TestClass])
  AC_SUBST([JAVA_TEST_CLASS])
])

dnl META_C_SETUP()
dnl --------------
dnl Sets up variables for a standard C package
dnl
AC_DEFUN([META_C_SETUP],[
  AC_AIX
  AC_PROG_CC
  AC_LIBTOOL_WIN32_DLL
  AC_PROG_LIBTOOL
  AC_PROG_MAKE_SET([])
])

dnl META_GET_PKG_VAR(VARNAME)
dnl -------------------------
dnl Is substituted by the value of VARNAME from a pkg-config file at
dnl reconf time
AC_DEFUN([META_GET_PKG_VAR],[esyscmd([grep "$1:" *.pc.in | cut -f 2 -d ':' | tr -d '[:space:]'])])

dnl META_GET_PKG_VAR_LIST(VARNAME)
dnl ------------------------------
dnl Is substituted by the value of VARNAME from a pkg-config file, 
dnl without trimming, at reconf time
AC_DEFUN([META_GET_PKG_VAR_LIST],[esyscmd([grep "$1:" *.pc.in | cut -f 2 -d ':' | tr '[,]' '[ ]'])])

dnl META_GET_PKG_USER_VAR(VARNAME)
dnl ------------------------------
dnl Is substituted by the value of VARNAME from a pkg-config file, at reconf
dnl time
AC_DEFUN([META_GET_PKG_USER_VAR],[esyscmd([grep "$1=" *.pc.in | cut -f 2 -d '=' | tr -d '[:space:]'])])

dnl META_GET_PKG_USER_VAR_PLAIN(VARNAME)
dnl ------------------------------------
dnl Is substituted by the value of VARNAME from a pkg-config file at reconf time
AC_DEFUN([META_GET_PKG_USER_VAR_PLAIN],[esyscmd([grep "$1=" *.pc.in | cut -f 2 -d '='])])

dnl META_INSTALLED_PKG_VAR(PKG,VAR)
dnl -------------------------------
AC_DEFUN([META_INSTALLED_PKG_VAR],[$($PKG_CONFIG --variable=$2 "$1" | tr -d '@<:@:space:@:>@')])

dnl META_INSTALLED_PKG_CONFIG_PATH(PATH_TO_PKG_FILE)
AC_DEFUN([META_INSTALLED_PKG_CONFIG_PATH],[$(grep "PkgConfigPath=" $1 | cut -f 2 -d '=')])

dnl META_GENERATE_UNINSTALLED_PC(PKG)
dnl ---------------------------------
AC_DEFUN([META_GENERATE_UNINSTALLED_PC],[
cat $1.pc | grep -v "^Libs" | grep -v "^Cflags" | sed -e 's/\#uninstalled //g' > $1-uninstalled.pc
echo "PkgConfigPath=$PKG_CONFIG_PATH" >> $1.pc
])

dnl META_IF_CONTAINS(STRING,SUBSTRING,CODE)
dnl checks whether SUBSTRING is a part of STRING, and runs CODE if yes
dnl (this is supposed to be a portable way to do this)
AC_DEFUN([META_IF_CONTAINS],[
  if test `expr "$1" : ".*$2.*"` -eq 0 ; then
    $3
  fi
])

dnl A shell function for getting the recursive requirements of a package
AC_DEFUN([META_RECURSIVE_REQUIRES],[
# args: $[]1 : top module
function meta_requires() {
  meta_require_closure=""
  meta_pkg_config_path="$(echo "$[]PKG_CONFIG_PATH" | tr ':' ' ')"
  if test -z  "${meta_pkg_config_path}"; then
    meta_pkg_config_path="/usr/lib/pkgconfig"
  fi

  meta_recursive_requires $[]1
  echo ${meta_require_closure}
}

function meta_recursive_requires() {
  meta_require_pcfile=""
  meta_require_kids=""

  META_IF_CONTAINS([${meta_require_closure}],[$[]1 ],[
    meta_require_pcfile=$(meta_find_pkg_config_file $[]1)
    meta_require_closure="${meta_require_closure} $[]1"

    meta_require_kids=$(grep "Requires:" ${meta_require_pcfile} | cut -f 2 -d ':' | tr ',' ' ')
    for k in ${meta_require_kids}; do
      meta_recursive_requires $k
    done
  ])
}

dnl This is really something that should be supported by pkg-config
function meta_find_pkg_config_file() {
  meta_find_pkg_config_result=""

  dnl First examine the path for uninstalled pkg-config files.
  for entry in $meta_pkg_config_path; do
    if test -e "$entry/$[]1-uninstalled.pc"; then
      meta_find_pkg_config_result="$entry/$[]1-uninstalled.pc"
      break
    fi
  done

  dnl Next find the real pkg-config files.
  if test -z "$meta_find_pkg_config_result"; then
    for entry in $meta_pkg_config_path; do
      if test -e "$entry/$[]1.pc"; then
        meta_find_pkg_config_result="$entry/$[]1.pc"
        break
      fi
    done
  fi

  if test -z "${meta_find_pkg_config_result}"; then
    AC_MSG_WARN([No pkg-config file found for $[]1])
  fi

  echo "$meta_find_pkg_config_result"
}

])
