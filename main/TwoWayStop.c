#include<stdint.h>
#include<stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/projdefs.h"
#include "freertos/task.h"
#include "Button.h"
#include "LED.h"
#include "LightStates.h"
void periph_init(void);

void app_main(void)
{
	Int_St *Pt;
	Pt=&TwoWayStop[0];

	periph_init();
	
	while(1)
		{
			//output current light state
			setLEDState(Pt->out);
			vTaskDelay(pdMS_TO_TICKS(Pt->time));
			Pt=Pt->Next[getButtonState()];

		}


}


void periph_init(void)
{
	Buttons_Init();
	LED_init();
}


