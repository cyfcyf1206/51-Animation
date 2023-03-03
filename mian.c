#include <REGX52.H>
#include "Delay.h"
#include "MatrixLED.h"

unsigned char code Animation[]=
{
	0xF0,0x00,0xFA,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
};


	
void mian()
{
	unsigned int i,Offset,count;
	Matrix_LED_Init();
	while(1)
	{
for(Offset=0;Offset<6;)
{
			for(i=0;i<8;i++)
			
		{MatrixLED_ShowColumn(i,Animation[i]);

//						MatrixLED_ShowColumn(1,Animation[1]);
//						MatrixLED_ShowColumn(2,Animation[0]);
//						MatrixLED_ShowColumn(3,Animation[2]);
//						MatrixLED_ShowColumn(4,Animation[0]);
//						MatrixLED_ShowColumn(5,Animation[5]);
//						MatrixLED_ShowColumn(6,Animation[0]);
//						MatrixLED_ShowColumn(7,Animation[0]);
				count++;}
		
if(count>=10)
{
Offset++;
	count=0;
}
}
}
	}