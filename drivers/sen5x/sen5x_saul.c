/*
 * Copyright (C) 2023 TU Braunschweig Institut für Betriebssysteme und Rechnerverbund
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
 * @author      Daniel Prigoshij <prigoshi@ibr.cs.tu-bs.de>
 *
 * @}
 */

#include "saul.h"
#include "sen5x.h"
#include "sen5x_params.h"

static int read_mass_concentration_pm1p0(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);
    
    res->val[0] = (int16_t)values->mass_concentration_pm1p0;
    res->unit   = UNIT_GPM3;
    res->scale  = -6;  // TODO. cm^3 zu m^3 ausrechnen

    return 1;
}

static int read_mass_concentration_pm2p5(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);
    
    res->val[0] = (int16_t)values->mass_concentration_pm2p5;
    res->unit   = UNIT_GPM3;
    res->scale  = -6;

    return 1;
}

static int read_mass_concentration_pm4p0(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);
    
    res->val[0] = (int16_t)values->mass_concentration_pm4p0;
    res->unit   = UNIT_GPM3;
    res->scale  = -6;

    return 1;
}

static int read_mass_concentration_pm10p0(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);
    
    res->val[0] = (int16_t)values->mass_concentration_pm10p0;
    res->unit   = UNIT_GPM3;
    res->scale  = -6;

    return 1;
}

static int read_number_concentration_pm0p5(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);

    res->val[0] = (int16_t)values->number_concentration_pm0p5;
    res->unit   = UNIT_CPM3;
    res->scale  = 0;

    return 1;
}

static int read_number_concentration_pm1p0(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);

    res->val[0] = (int16_t)values->number_concentration_pm1p0;
    res->unit   = UNIT_CPM3;
    res->scale  = 0;
    return 1;
}

static int read_number_concentration_pm2p5(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);

    res->val[0] = (int16_t)values->number_concentration_pm2p5;
    res->unit   = UNIT_CPM3;
    res->scale  = 0;
    return 1;
}

static int read_number_concentration_pm4p0(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);

    res->val[0] = (int16_t)values->number_concentration_pm4p0;
    res->unit   = UNIT_CPM3;
    res->scale  = 0;

    return 1;
}

static int read_number_concentration_pm10p0(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    sen5x_measurement_t *values;
    sen5x_read_pm_values(d, values);

    res->val[0] = (int16_t)values->number_concentration_pm10p0;
    res->unit   = UNIT_CPM3;
    res->scale  = 0;

    return 1;
}

static int read_typical_particle_size(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    res->val[0] = ;
    res->unit   = ;
    res->scale  = ;

    return 1;
}

static int read_ambient_humidity(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    res->val[0] = ;
    res->unit   = ;
    res->scale  = ;

    return 1;
}

static int read_ambient_temperature(const void *dev, phydat_t *res) {
    const sen5x_t *d = (sen5x_t *)dev;

    res->val[0] = ;
    res->unit   = ;
    res->scale  = ;

    return 1;
}

/**
const saul_driver_t vcnl40x0_proximity_saul_driver = {
    .read = read_proximity,
    .write = saul_write_notsup,
    .type = SAUL_SENSE_PROXIMITY
};
*/