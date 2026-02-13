/*
 * LED.c
 *
 *  Created on: Feb 3, 2026
 *      Author: Crispy
 */
#include <stdio.h>
#include "driver/gpio.h"
#include "hal/gpio_types.h"
#include "LED.h"
#include "LightStates.h"

void LED_init(void)
{
	gpio_reset_pin(N_Red);
	gpio_set_direction(N_Red,GPIO_MODE_INPUT_OUTPUT);
	gpio_reset_pin(N_Yellow);
	gpio_set_direction(N_Yellow,GPIO_MODE_INPUT_OUTPUT);
	gpio_reset_pin(N_Green);
	gpio_set_direction(N_Green,GPIO_MODE_INPUT_OUTPUT);
	gpio_reset_pin(E_Red);
	gpio_set_direction(N_Red,GPIO_MODE_INPUT_OUTPUT);
	gpio_reset_pin(E_Yellow);
	gpio_set_direction(E_Yellow,GPIO_MODE_INPUT_OUTPUT);
	gpio_reset_pin(E_Green);
	gpio_set_direction(E_Green,GPIO_MODE_INPUT_OUTPUT);
}

void setLEDState(uint32_t x)
{
	gpio_set_level(N_Red,(x>>5)&1);
	gpio_set_level(N_Yellow,(x>>4)&1);
	gpio_set_level(N_Green,(x>>3)&1);
	gpio_set_level(E_Red,(x>>2)&1);
	gpio_set_level(E_Yellow,(x>>1)&1);
	gpio_set_level(E_Green,(x>>0)&1);
}

/*void test_3LEDs(void)
{
	gpio_reset_pin(22);
	gpio_set_direction(22,GPIO_MODE_OUTPUT);
	gpio_reset_pin(23);
	gpio_set_direction(23,GPIO_MODE_OUTPUT);
	gpio_reset_pin(21);
	gpio_set_direction(21,GPIO_MODE_OUTPUT);
	
 	while(1)
 		{
	 	gpio_set_level(GPIO_NUM_22,1);
	 	vTaskDelay(pdMS_TO_TICKS(50));
	 	gpio_set_level(GPIO_NUM_23,1);
	 	vTaskDelay(pdMS_TO_TICKS(50));
	 	gpio_set_level(GPIO_NUM_21,1);
		vTaskDelay(pdMS_TO_TICKS(500));
		gpio_set_level(GPIO_NUM_22,0);
		gpio_set_level(GPIO_NUM_23,0);
	 	gpio_set_level(GPIO_NUM_21,0);
		vTaskDelay(pdMS_TO_TICKS(500));
		//printf("Im Alive And Well Master Crispy\n");
		//fflush(stdout);
	 
	 	}
}*/