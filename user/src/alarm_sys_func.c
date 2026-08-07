#include "beep.h"
#include "blink_led.h"
#include "buzzer.h"
#include "led.h"
#include "stm32h7xx_hal.h"

void led_init();
void alarm_init();
void alarm_mod_stay();
void alarm_mod_work(uint8_t led_num,uint16_t blink_times,uint32_t delay_ms);
void alarm_mod_alarm(uint8_t led_num,uint16_t blink_times,uint32_t delay_ms,uint32_t alarm_beep_ms);

void alarm_sys_func(uint8_t led_num,uint16_t blink_times,uint32_t delay_ms,uint32_t alarm_beep_ms)
{
    alarm_init();
    while(1)
    {
        alarm_mod_stay();
        alarm_mod_work(led_num,blink_times,delay_ms);
        alarm_mod_alarm(led_num,blink_times,delay_ms,alarm_beep_ms);
    }
}

void alarm_init()
{
  buzzer_init();
  led_init();
}

void alarm_mod_stay()
{
    alarm_init();
    led_on(1);
    led_on(2);
    led_on(3);
    led_on(4);
    HAL_Delay(5000);
}

void alarm_mod_work(uint8_t led_num,uint16_t blink_times,uint32_t delay_ms)
{
    alarm_init();
    uint32_t start_tick=HAL_GetTick();
    while(HAL_GetTick() - start_tick < 5000)
    {
		blink_led(led_num, blink_times, delay_ms);
    }
}

void alarm_mod_alarm(uint8_t led_num,uint16_t blink_times,uint32_t delay_ms,uint32_t alarm_beep_ms)
{
    alarm_init();
    uint32_t start_tick=HAL_GetTick();
    uint32_t alarm_delay_ms = delay_ms / 2;
    
	
    while(HAL_GetTick() - start_tick < 5000)
    {
        blink_led(led_num, blink_times, alarm_delay_ms);
        beep(alarm_beep_ms);
    }
}

void led_init()
{
	led_off(1);
	led_off(2);
	led_off(3);
	led_off(4);
}

