// pwm_driver.c – TIM2 kullanılarak PWM üretimi
#include "stm32f1xx_hal.h"

extern TIM_HandleTypeDef htim2;

void PWM_Init(void) {
    // Timer2 PWM başlat
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
}

void PWM_SetDutyMicroseconds(uint16_t us) {
    // 72MHz sistem saatine göre 1us = 72 clock cycle
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, us * 72);
}
