#include <REGX52.h>
#include <intrins.h>

void Delay(unsigned int xms);
//void main()//������������led2����
//{
//		unsigned char LedNum=0;
//		while(1)
//		{
//			if(P3_1==0){  //P3Ϊ����������,1023
//				Delay(20);
//				while(P3_1==0);
//				Delay(20);
//				
//				LedNum++;
//				P2=~LedNum++;
//				
//				}
//			}
//			
//		}
unsigned char LedNum;
void main()
{
	P2=0x01;
	P2=~P2;
	while(1)
	{
		if(P3_1==0){
			Delay(20);
			while(P3_1==0);
			Delay(20);
			
			LedNum++;
			if(LedNum>=8)
					LedNum=0;
			P2=~(0x01<<LedNum);
			
				
			
		}
	}

}
		
void Delay(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;

	while(xms){
	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	xms--;
	}
}
