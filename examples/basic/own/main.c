/**
 * @ingroup     examples
 * @{
 *
 * @file
 * @brief       
 *
 * @author      
 *
 * @}
 */

#include <stdio.h>
#include "periph/uart.h"
#include "xtimer.h"

#define UART_DEV        UART_DEV(0)   
#define BAUDRATE        115200


static void rx_cb(void *arg, uint8_t data)
{
    (void)arg;
    
    printf("Uart data received: %d", (int)data);
}

int main(void)
{
    if (uart_init(UART_DEV, BAUDRATE, rx_cb, NULL) != 0) {
        puts("UART init failed!");
        return 1;
    }

    return 0;
}
