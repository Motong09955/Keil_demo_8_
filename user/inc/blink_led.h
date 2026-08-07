/**
 * @file    user_beep.h
 * @brief   8.7 作业：上电蜂鸣器“长-短-短”三声的声明。
 *          默认不参与编译，由学员把 user/src/user_beep.c 加入 Keil 工程后生效。
 */
#ifndef BLINK_LED_H
#define BLINK_LED_H

#include "stm32h7xx_hal.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* 上电时让蜂鸣器按“长-短-短”响三次 */
    void blink_led(uint8_t led_num, uint16_t times, uint32_t delay_ms);

#ifdef __cplusplus
}
#endif

#endif /* BLINK_LED_H */
