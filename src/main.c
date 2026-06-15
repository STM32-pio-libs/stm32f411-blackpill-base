#include "main.h"
#include <stdio.h>

UART_HandleTypeDef huart1;
SPI_HandleTypeDef spi1;
I2C_HandleTypeDef i2c1;

int main(){
    HAL_Init();
    SystemClock_Config();
    enable_gpio();
    setup_hardfault_led();
    setup_uart1();
    setup_spi1();
    setup_i2c1();
    setvbuf(stdout, NULL, _IONBF, 0);

    i2c_scan(&i2c1);

    while (1) {
    }

}
