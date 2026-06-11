#include "main.h"
#include <stdio.h>

UART_HandleTypeDef huart1;
extern SPI_HandleTypeDef  spi1;

int main(){
    HAL_Init();
    SystemClock_Config();
    enable_gpio();
    setup_hardfault_led();
    setup_uart1();
    setup_spi1();
    setvbuf(stdout, NULL, _IONBF, 0);

    char s[100];

    while (1) { 
        printf("Enter Something: ");
        scanf("%s", s);
        printf("You entered: %s\n\r", s);
    }

}
