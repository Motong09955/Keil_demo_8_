#include "blink_led.h"
#include "led.h"
void blink_led(uint8_t led_num, uint16_t times, uint32_t delay_ms)
{
  uint16_t i = 0U; /* 循环计数变量 */

  /* if 判断：LED 编号只允许 1~4 */
  if (led_num > 4)
  {
    return; /* return 直接结束当前函数 */
  }

  /* for 循环：初始化; 判断条件; 每次循环后执行 */
  for (; i<=led_num; i++)
  {
    led_on(i);          /* 点亮指定 LED */
    HAL_Delay(delay_ms);      /* 延时一段时间 */
    led_off(i);         /* 熄灭指定 LED */
    
  }
}