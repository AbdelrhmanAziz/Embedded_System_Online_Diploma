#include "uart.h"

unsigned char string[100] = "learn-in-depth: Abdelrhman";

void main(void)
{
	
	Uart_Send_String(string);
	
}