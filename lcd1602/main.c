#include <REGX52.H>
#include "LCD1602.h" //包含LCD1602头文件
#include "Delay.h"	 //包含Delay头文件

int Result = 0;

void main()
{
	LCD_Init();
	while (1)
	{
		LCD_ShowString(1, 1, "hello");
	}
}
