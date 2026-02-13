/*
 * LED.h
 *
 *  Created on: Feb 3, 2026
 *      Author: Crispy
 */

#ifndef MAIN_LED_H_
#define MAIN_LED_H_
#include <stdint.h>

#define N_Red		23
#define N_Yellow	22
#define N_Green		21
#define E_Red		19
#define E_Yellow	18
#define E_Green		17

void LED_init(void);
void setLEDState(uint32_t x);
void test_3LEDs(void);


#endif /* MAIN_LED_H_ */
