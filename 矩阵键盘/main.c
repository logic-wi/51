#include <REGX52.H>
#include "LCD1602.h" //包含LCD1602头文件
#include "Delay.h"
#include "MatrixKey.h"

unsigned char Keynum;
void main()
{
	LCD_Init();
	while (1)
	{
		Keynum=MatrixKey();
		if (Keynum)
		{
			LCD_ShowNum(2,1,Keynum,2);
		}
		
	}
}