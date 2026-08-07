/**
 * @file    alarm_sys_func.h
 * @brief   报警系统
 *          
 */
#ifndef ALARM_SYS_FUNC_H
#define ALARM_SYS_FUNC_H

#include "stm32h7xx_hal.h"

#ifdef __cplusplus
extern "C"
{
#endif

    
    void alarm_sys_func(uint8_t led_num,uint16_t blink_times,uint32_t delay_ms,uint32_t alarm_beep_ms);

#ifdef __cplusplus
}
#endif

#endif /* ALARM_SYS_FUNC_H */