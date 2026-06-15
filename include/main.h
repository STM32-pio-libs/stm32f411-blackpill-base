#include <stm32f4xx_hal.h>

void Error_Handler(void);
void SystemClock_Config(void);
void enable_gpio(void);
void setup_hardfault_led(void);
void setup_uart1();
void setup_spi1(void);
void setup_i2c1(void);
void i2c_scan(I2C_HandleTypeDef *i2c);
