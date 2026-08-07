/**
 * @file    user_beep.h
 * @brief   8.7 作业：上电蜂鸣器“长-短-短”三声的声明。
 *          默认不参与编译，由学员把 user/src/user_beep.c 加入 Keil 工程后生效。
 */
#ifndef BEEP_H
#define BEEP_H

#include "stm32h7xx_hal.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* 上电时让蜂鸣器按“长-短-短”响三次 */
    void beep(uint32_t beep_ms);

#ifdef __cplusplus
}
#endif

#endif /* BEEP_H */