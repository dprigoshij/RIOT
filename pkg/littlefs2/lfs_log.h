/*
 * Copyright (C) 2024 Joshua DeWeese <josh.deweese@gmail.com>
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     sys_littlefs2
 * @{
 *
 * @file
 * @brief       littlefs v2 logging macro overrides
 *
 * This header provides re-implementations of the logging and debugging macros
 * used in littlefs. This is to allow the package to make use of RIOT's own
 * modules for logging and debugging.
 *
 * @author      Joshua DeWeese <josh.deweese@gmail.com>
 *
 */

#ifndef LFS_LOG_H
#define LFS_LOG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "log.h"

#ifdef LFS_YES_TRACE
#  define ENABLE_DEBUG 1
#endif
#include "debug.h"

/**
 * @brief Private macro for routing littlefs trace msgs to RIOT's DEBUG macro.
 *
 * @param[in] fmt               printf style format string
 * @param[inout] ...            printf style variadic args
 */
#define _LFS_TRACE(fmt, ...) \
    DEBUG("%s:%d: " fmt "%s\n", __FILE__, __LINE__, __VA_ARGS__)

/**
 * @brief Private macro for routing littlefs log msgs to RIOT's log module.
 *
 * @param[in] level             log level of this log message
 * @param[in] fmt               printf style format string
 * @param[inout] ...            printf style variadic args
 */
#define _LFS_LOG(level, fmt, ...)\
    LOG(level, "lfs: " fmt "%s\n", __VA_ARGS__)

/**  */
/**
 * @name littlefs overrides
 * @{
 * @brief Re-implementation of littlefs's logging and debugging macros.
 */

/** override of littlefs's `LFS_TRACE()` */
#ifdef LFS_YES_TRACE
#  define LFS_TRACE(...) _LFS_TRACE(__VA_ARGS__, "")
#else
#  define LFS_TRACE(...)
#endif

/** override of littlefs's `LFS_DEBUG()` */
#ifndef LFS_NO_DEBUG
#  define LFS_DEBUG(...) _LFS_LOG(LOG_DEBUG, __VA_ARGS__, "")
#else
#  define LFS_DEBUG(...)
#endif

/** override of littlefs's `LFS_WARN()` */
#ifndef LFS_NO_WARN
#  define LFS_WARN(...) _LFS_LOG(LOG_WARNING, __VA_ARGS__, "")
#else
#  define LFS_WARN(...)
#endif

/** override of littlefs's `LFS_ERROR()` */
#ifndef LFS_NO_ERROR
#  define LFS_ERROR(...) _LFS_LOG(LOG_ERROR, __VA_ARGS__, "")
#else
#  define LFS_ERROR(...)
#endif

/** @} */

#endif /* LFS_LOG_H */
/** @} */
