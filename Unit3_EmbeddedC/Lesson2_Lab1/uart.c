#include "uart.h"
#define UART0DR    *((volatile unsigned int*)((unsigned int*)0x101f1000))

void Uart_Send_String(unsigned char* ptr)
{
	while(*ptr != 0)
	{
		
		UART0DR = (*ptr);
		
		ptr++;
	}
	
}