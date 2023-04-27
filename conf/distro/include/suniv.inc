DISTRO = "lichee"
DISTRO_NAME = "lichee"
DISTRO_VERSION = "0.0.1"
SDK_VENDOR = "-lichee"
SDK_VERSION := "${@'${DISTRO_VERSION}'.replace('snapshot-${DATE}','snapshot')}"

MAINTAINER = "iotah <writeforever@foxmail.com>"

TARGET_VENDOR = "-lichee"

LOCALCONF_VERSION = "1"

SUNIV_DEFAULT_DISTRO_DEFATURES = "largefile ptest multiarch"

DISTRO_FEATURES ?= "${DISTRO_FEATURES_DEFAULT} ${DISTRO_FEATURES_LIBC} ${SUNIV_DEFAULT_DISTRO_FEATURES}"

SDK_NAME = "${DISTRO}-${TCLIBC}-${SDK_ARCH}-${IMAGE_BASENAME}-${TUNE_PKGARCH}"
SDKPATH = "/opt/${DISTRO}/${SDK_VERSION}"

PREMIRRORS ??= "\
bzr://.*/.*   https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
cvs://.*/.*   https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
git://.*/.*   https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
gitsm://.*/.* https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
hg://.*/.*    https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
osc://.*/.*   https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
p4://.*/.*    https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
svn://.*/.*   https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n"

MIRRORS =+ "\
ftp://.*/.*      https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
http://.*/.*     https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n \
https://.*/.*    https://mirror.iscas.ac.cn/yocto/mirror/sources/ \n"
