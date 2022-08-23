#include <REGX52.H>
void Uart_Init(void) // 4800bps@11.0592MHz
{
    PCON &= 0x7F; //�����ʲ�����
    SCON = 0x50;  // 8λ����,�ɱ䲨����
    TMOD &= 0x0F; //�����ʱ��1ģʽλ
    TMOD |= 0x20; //�趨��ʱ��1Ϊ8λ�Զ���װ��ʽ
    TL1 = 0xFA;   //�趨��ʱ��ֵ
    TH1 = 0xFA;   //�趨��ʱ����װֵ
    ET1 = 0;      //��ֹ��ʱ��1�ж�
    TR1 = 1;      //������ʱ��1
		EA=1;
		ES=1;
	
}
void UART_SendByte(unsigned char Byte)
{
    SBUF = Byte;
    while (TI == 0);
    TI = 0;
}
//串口中断模板
/*
void UART_Routine() interrupt 4
{
	if(RI==1){
			RI=0;
	}

}
*/
