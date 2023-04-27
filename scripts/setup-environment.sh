#!/bin/bash

METALAYER=meta-suniv
TMPDIR=suniv-build

# check running user
if [ "$(whoami)" == "root" ]; then
    echo_error "Should never run this script as root. exiting..."
fi

# is using a oe-core?
OEROOT=$(pwd)/yocto/poky
if [ -e yocto/oe-core ]; then
    echo_debug "using oe-core instead poky"
    OEROOT = yocto/oe-core
fi

# setup oe env
. $OEROOT/oe-init-build-env $CWD/${TMPDIR} >/dev/null

# if this file doesn't generated automaticlly,
# there is no need to go futher
if [ ! -e conf/local.conf ]; then
    echo_error "conf/local.conf doesn't exists. exiting..."
    exit -1
fi

# files copy
if [ ! -e conf/local.conf.sample ]; then
    echo_debug "copying config files"
    cp -f $CWD/yocto/${METALAYER}/conf/bblayers.conf.sample $CWD/${TMPDIR}/conf/bblayers.conf
    cp -f $CWD/yocto/${METALAYER}/conf/local.conf.sample $CWD/${TMPDIR}/conf/local.conf
fi

echo_debug "appending config ...."
cat >> conf/local.conf << EOF
BB_NUMBER_THREADS = "$NCPU"
ARALLEL_MAKE = "-j $NCPU"
EOF

cat <<EOF

You can now build your image. To build the suniv-lichee-image then run this:
$ bitbake suniv-lichee-image

EOF