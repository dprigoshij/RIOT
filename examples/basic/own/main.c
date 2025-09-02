
#include <stdio.h>
#include "periph/uart.h"
#include "xtimer.h"
#include "periph/gpio.h"
  
#define BAUDRATE        115200

static char rx_buf[64];
static size_t rx_pos = 0;

static void rx_cb(void *arg, uint8_t data) {
    (void)arg;
    if (data == '\n' || rx_pos >= sizeof(rx_buf) - 1) {
        rx_buf[rx_pos] = '\0';  // terminate string
        printf("UART data received: %s\n", rx_buf);
        rx_pos = 0;             // reset buffer
    }
    else {
        rx_buf[rx_pos++] = (char)data;
    }
}

int main(void) {

    if (uart_init(UART_DEV(2), BAUDRATE, rx_cb, NULL) != 0) {
        puts("UART init failed!");
        return 1;
    }

    int counter = 0;
    while (1) {
        char buf[32];
        int len = snprintf(buf, sizeof(buf), "Hello %d\n", counter++);
        uart_write(UART_DEV(2), (const uint8_t *)buf, len);
        xtimer_sleep(1);
    }


    return 0;
}
