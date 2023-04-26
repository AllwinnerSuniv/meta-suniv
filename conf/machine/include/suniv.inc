SOC_FAMILY = "suniv"
require conf/machine/include/soc-family.inc

require conf/machine/include/tune-arm926ejs.inc

# Increase this everytime when you change some thing in the kernel
MACHINE_KERNEL_REV = "r0"

KERNEL_IMAGETYPE = "zImage"

MACHINE_FEATURES += "keyboard vfat ext2 screen touchscreen alsa wifi sdio"

UBOOT_ENTRYPOINT = "0x80000000"
