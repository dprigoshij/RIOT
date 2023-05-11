/*
 * Copyright (C) 2023 TUÚ Braunschweig Institut für Betriebssysteme und Rechnerverbund
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    drivers_sen5x Sensirion Embedded I2C SEN5x Driver
 * @ingroup     drivers_sensors
 * @brief       Driver for I2C communication to SEN5x devices.
 *
 * @{
 *
 * @file
 *
 * @author      Daniel Prigoshij <d.prigoshij@tu-braunschweig.de>
 */

#ifndef SEN5X_H
#define SEN5X_H

/* Add header includes here */

#ifdef __cplusplus
extern "C" {
#endif

/* Declare the API of the driver */

/**
 * @brief   Device initialization parameters
 */
typedef struct {
    /* add initialization params here */
} sen5x_params_t;

/**
 * @brief   Device descriptor for the driver
 */
typedef struct {
    /** Device initialization parameters */
    sen5x_params_t params;
} sen5x_t;

/**
 * @brief   Initialize the given device
 *
 * @param[inout] dev        Device descriptor of the driver
 * @param[in]    params     Initialization parameters
 *
 * @return                  0 on success
 */
int sen5x_init(sen5x_t *dev, const sen5x_params_t *params);

#ifdef __cplusplus
}
#endif

#endif /* SEN5X_H */
/** @} */
