/*
 * Copyright (C) 2023 TU Braunschweig Institut für Betriebssysteme und Rechnerverbund
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     drivers_sen5x
 *
 * @{
 * @file
 * @brief       Default configuration
 *
 * @author      Daniel Prigoshij <d.prigoshij@tu-braunschweig.de>
 */

#ifndef SEN5X_PARAMS_H
#define SEN5X_PARAMS_H

#include "board.h"
#include "sen5x.h"
#include "sen5x_constants.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    Set default configuration parameters
 * @{
 */
#ifndef SEN5X_PARAM_PARAM1
#define SEN5X_PARAM_PARAM1
#endif

#ifndef SEN5X_PARAMS
#define SEN5X_PARAMS
#endif
/**@}*/

/**
 * @brief   Configuration struct
 */
static const sen5x_params_t sen5x_params[] =
{
    SEN5X_PARAMS
};

#ifdef __cplusplus
}
#endif

#endif /* SEN5X_PARAMS_H */
/** @} */
