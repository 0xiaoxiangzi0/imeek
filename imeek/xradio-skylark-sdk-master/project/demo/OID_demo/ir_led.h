#ifndef _IR_LED_H_
#define _IR_LED_H_

#define WHITE 0
#define BLACK 1

#define IR_ENABLE_PORT	    GPIO_PORT_A
#define IR_ENABLE_PIN	    GPIO_PIN_3

#define FRONT_IR_LED_PORT	GPIO_PORT_B
#define FRONT_IR_LED_PIN	GPIO_PIN_0

#define LEFT_IR_LED_PORT	GPIO_PORT_B
#define LEFT_IR_LED_PIN	    GPIO_PIN_2

#define RIGHT_IR_LED_PORT	GPIO_PORT_B
#define RIGHT_IR_LED_PIN	GPIO_PIN_3

#define IR_ENABLE()   HAL_GPIO_WritePin(IR_ENABLE_PORT, IR_ENABLE_PIN, 1)
#define IR_DISABLE()  HAL_GPIO_WritePin(IR_ENABLE_PORT, IR_ENABLE_PIN, 0)

#define FRONT_IR_LED_READ()     HAL_GPIO_ReadPin(FRONT_IR_LED_PORT, FRONT_IR_LED_PIN)
#define LEFT_IR_LED_READ()      HAL_GPIO_ReadPin(LEFT_IR_LED_PORT,  LEFT_IR_LED_PIN)
#define RIGHT_IR_LED_READ()     HAL_GPIO_ReadPin(RIGHT_IR_LED_PORT, RIGHT_IR_LED_PIN)


void ir_led_gpio_init(void);
void IrEnableGpioInit(void);

#endif
