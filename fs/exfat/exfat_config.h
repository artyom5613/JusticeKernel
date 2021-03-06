#ifndef _EXFAT_CONFIG_H
#define _EXFAT_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

#define OS_NONOS                1
#define OS_LINUX                2

#define FFS_CONFIG_OS           OS_LINUX

#define FFS_CONFIG_LITTLE_ENDIAN        1
#define FFS_CONFIG_LEGACY_32BIT_API     0
#define FFS_CONFIG_LEGACY_32BIT_API     0
#define FFS_CONFIG_SUPPORT_CP1250       1
#define FFS_CONFIG_SUPPORT_CP1251       1
#define FFS_CONFIG_SUPPORT_CP1252       1
#define FFS_CONFIG_SUPPORT_CP1253       1
#define FFS_CONFIG_SUPPORT_CP1254       1
#define FFS_CONFIG_SUPPORT_CP1255       1
#define FFS_CONFIG_SUPPORT_CP1256       1
#define FFS_CONFIG_SUPPORT_CP1257       1
#define FFS_CONFIG_SUPPORT_CP1258       1
#define FFS_CONFIG_SUPPORT_CP874        1
#define FFS_CONFIG_SUPPORT_CP932        1
#define FFS_CONFIG_SUPPORT_CP936        1
#define FFS_CONFIG_SUPPORT_CP949        1
#define FFS_CONFIG_SUPPORT_CP950        1
#define FFS_CONFIG_SUPPORT_UTF8         1
#define EXFAT_CONFIG_DISCARD		1
#define EXFAT_CONFIG_KERNEL_DEBUG	1
#define EXFAT_CONFIG_DEBUG_MSG		0

#ifdef __cplusplus
}
#endif

#endif
