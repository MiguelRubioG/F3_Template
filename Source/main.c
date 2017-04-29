#include <stm32f30x.h>
#include "delay.h"

uint32_t sequence[]={0xA00, 0x900, 0x500, 0x600};
uint8_t cont;
int main( void )
{
	RCC->AHBENR |=1<<21;
	GPIOE->MODER |= 0x550000;
	
	//Initialization stage

	while(1)
	{
		for (cont=0; cont<4; cont++)
		{
			GPIOE->ODR=sequence[cont];
			_delay_ms(100);
		}
		
	}
	
}
