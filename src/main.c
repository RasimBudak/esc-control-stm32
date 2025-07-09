// main.c – STM32 ESC kontrol demo
#include "pwm_driver.h"

int main(void) {
    HAL_Init();
    SystemClock_Config();
    PWM_Init();

    while (1) {
        // ESC sinyalini 1000us (min throttle) ile başlat
        PWM_SetDutyMicroseconds(1000);
        HAL_Delay(2000);

        // Hızı orta seviye yap
        PWM_SetDutyMicroseconds(1500);
        HAL_Delay(2000);

        // Maksimum throttle
        PWM_SetDutyMicroseconds(2000);
        HAL_Delay(2000);
    }
}
