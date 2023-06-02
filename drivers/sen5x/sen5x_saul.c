/*
 * Copyright (C) 2023 Daniel Prigoshij <d.prigoshij@tu-braunschweig.de>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */
/**
 * @ingroup     drivers_sen5x
 * @{
 *
 * @file
 * @brief       SAUL adaptation for SEN50/54/55 devices.
 *
 * @author      Daniel Prigoshij <d.prigoshij@tu-braunschweig.de>
 *
 * @}
 */

#include "saul.h"
#include "sen5x.h"

static int read_illuminance(const void *dev, phydat_t *res)
{
    const sen5x_t *d = (sen5x_t *)dev;

    res->val[0] = (int16_t)vcnl40x0_read_illuminance(d);
    res->unit = UNIT_LUX;
    res->scale = 0;

    return 1;
}

const saul_driver_t vcnl40x0_proximity_saul_driver = {
    .read = read_proximity,
    .write = saul_write_notsup,
    .type = SAUL_SENSE_PROXIMITY
};