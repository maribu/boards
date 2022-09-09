#if defined(MODULE_MTD_SDCARD)
#include "mtd_sdcard.h"
#include "sdcard_spi.h"
#include "sdcard_spi_params.h"

#if defined(MODULE_FATFS_VFS)
#include "fs/fatfs.h"
#include "vfs_default.h"
#endif

/* this is provided by the sdcard_spi driver see drivers/sdcard_spi/sdcard_spi.c */
extern sdcard_spi_t sdcard_spi_devs[ARRAY_SIZE(sdcard_spi_params)];

mtd_sdcard_t mtd_sdcard_dev = {
    .base = {
        .driver = &mtd_sdcard_driver,
    },
    .sd_card = &sdcard_spi_devs[0],
    .params = &sdcard_spi_params[0]
};

mtd_dev_t *mtd0 = (mtd_dev_t *)&mtd_sdcard_dev;

#if IS_USED(MODULE_FATFS_VFS)
VFS_AUTO_MOUNT(fatfs, VFS_MTD(mtd_sdcard_dev), VFS_DEFAULT_SD(0), 0);
#endif /* MODULE_FATFS_VFS */

#endif /* MODULE_MTD_SDCARD */
