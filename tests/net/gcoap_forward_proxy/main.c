/*
 * Copyright (C) 2024 ML!PA Consulting GmbH
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     tests
 * @{
 *
 * @file
 * @brief       test application for the GCoAP forward proxy
 *
 * @author      Marian Buschsieweke <marian.buschsieweke@posteo.net>
 * @}
 */

#include "msg.h"
#include "shell.h"

#define MAIN_QUEUE_SIZE (4)
static msg_t _main_msg_queue[MAIN_QUEUE_SIZE];

int main(void)
{
    msg_init_queue(_main_msg_queue, MAIN_QUEUE_SIZE);

    char line_buf[SHELL_DEFAULT_BUFSIZE];
    shell_run(NULL, line_buf, SHELL_DEFAULT_BUFSIZE);

    return 0;
}
