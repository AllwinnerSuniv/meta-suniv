require u-boot.inc

# SPL build
UBOOT_BINARY = "u-boot.img"
UBOOT_IMAGE = "u-boot-${MACHINE}-${PV}-${PR}.img"
UBOOT_SYMLINK = "u-boot-${MACHINE}.img"

PV = "2018.01"

SRC_URI = "git://git.denx.de/u-boot.git \
	"

# v2018.01 tag
SRCREV = "f3dd87e0b98999a78e500e8c6d2b063ebadf535a"

LIC_FILES_CHKSUM = "file://Licenses/README;md5=a2c678cfd4a4d97135585cad908541c6"

S = "${WORKDIR}/git"
