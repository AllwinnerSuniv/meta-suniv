require u-boot.inc

SECTION = "bootloaders"
DEPENDS += "flex-native bison-native"

PV = "2018.01"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=a2c678cfd4a4d97135585cad908541c6"

# v2018.01 tag
SRCREV = "f3dd87e0b98999a78e500e8c6d2b063ebadf535a"

SRC_URI = "git://git.denx.de/u-boot.git \
           file://0001-apply-things-from-lichee.patch \
           "

S = "${WORKDIR}/git"
