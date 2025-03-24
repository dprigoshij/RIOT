@defgroup    boards_nucleo-f746zg STM32 Nucleo-F746ZG
@ingroup     boards_common_nucleo144
@brief       Support for the STM32 Nucleo-F746ZG

## Overview

The Nucleo-F746ZG is a board from ST's Nucleo family supporting ARM Cortex-M7
STM32F746ZG microcontroller with 320KiB of RAM and 1 MiB of Flash.

## Pinout

@image html pinouts/nucleo-f207zg-and-more.svg "Pinout for the Nucleo-F746ZG (from STM user manual, UM1974, http://www.st.com/resource/en/user_manual/dm00244518.pdf, page 32)" width=50%

### MCU

| MCU        |    STM32F746ZG      |
|:---------- |:------------------- |
| Family     | ARM Cortex-M7       |
| Vendor     | ST Microelectronics |
| RAM        | 320KiB              |
| Flash      | 1MiB                |
| Frequency  | up to 216MHz        |
| FPU        | yes                 |
| Timers     | 18 (12x 16-bit, 2x 32, 1x RTC, 1x Systick, 2x Watchdog) |
| ADC        | 3x 12-bit (24 channels) |
| UARTs      | 4 (four USARTs/UARTs) |
| SPIs       | 6                   |
| CANs       | 2                   |
| RTC        | 1                   |
| I2Cs       | 4                   |
| Vcc        | 1.7V - 3.6V         |
| Datasheet  | [Datasheet](https://www.st.com/resource/en/datasheet/stm32f746zg.pdf) |
| Reference Manual | [Reference Manual](https://www.st.com/resource/en/reference_manual/rm0385-stm32f75xxx-and-stm32f74xxx-advanced-armbased-32bit-mcus-stmicroelectronics.pdf) |
| Programming Manual | [Programming Manual](https://www.st.com/resource/en/programming_manual/pm0253-stm32f7-series-and-stm32h7-series-cortexm7-processor-programming-manual-stmicroelectronics.pdf) |
| Board Manual | [Board Manual](https://www.st.com/resource/en/user_manual/dm00244518-stm32-nucleo-144-boards-stmicroelectronics.pdf) |

## Flashing the Board Using ST-LINK Removable Media

On-board ST-LINK programmer provides via composite USB device removable media.
Copying the HEX file causes reprogramming of the board. This task
could be performed manually; however, the cpy2remed (copy to removable
media) PROGRAMMER script does this automatically. To program board in
this manner, use the command:
```
make BOARD=nucleo-f746zg PROGRAMMER=cpy2remed flash
```
@note This PROGRAMMER was tested using ST-LINK firmware 2.37.26. Firmware updates
      can be found on [this STM webpage](https://www.st.com/en/development-tools/stsw-link007.html).
