/*
 * Button.c
 *
 *  Created on: Feb 3, 2026
 *      Author: Crispy
 */
#include "Button.h"
#include "driver/gpio.h"


void Buttons_Init(void)
{
	gpio_reset_pin(N_in);
	gpio_set_direction(N_in,GPIO_MODE_INPUT);
	gpio_reset_pin(E_in);
	gpio_set_direction(E_in,GPIO_MODE_INPUT);	
	
}
int getButtonState(void)
{
	int North,East;
	North=gpio_get_level(N_in);
	East=gpio_get_level(E_in);
	
	switch(North){
		case 0:
			if(East==0)
			{
				return 0;
			}
			else 
			{
				return 1;
			}
		case 1:
			if(East==0)
			{
				return 2;
			}
			else 
			{
				return 3;
			}
		default:
			return 0;
	}
}

/*void test_button_LED(void)
{
	gpio_reset_pin(N_in);
	gpio_reset_pin(E_in);	
	gpio_set_direction(N_in,GPIO_MODE_INPUT);
	gpio_set_direction(E_in,GPIO_MODE_INPUT);
	
	gpio_reset_pin(N_Red);
	gpio_set_direction(N_Red,GPIO_MODE_OUTPUT);
	gpio_reset_pin(E_Red);
	gpio_set_direction(E_Red,GPIO_MODE_OUTPUT);
	int Norf,East;
	
	while(1)
	{
		
		Norf=gpio_get_level(N_in);
		East=gpio_get_level(E_in);
		if(Norf==1)
		{
			gpio_set_level(N_Red,1);
		}
		if(Norf==0)
		{
			gpio_set_level(N_Red,0);
		}
		if(East==1)
		{
			gpio_set_level(E_Red,0);
		}
		if(East==0)
		{
			gpio_set_level(E_Red,0);
		}
		else
		{}
	}
}*/