/*
 * LightStates.c
 *
 *  Created on: Jan 25, 2026
 *      Author: Crispy
 */
#include "LightStates.h"



Int_St TwoWayStop[4]= {
	{0x0C,30000,{&TwoWayStop[0],&TwoWayStop[1],&TwoWayStop[0],&TwoWayStop[1]}},	
	{0x14,5000,{&TwoWayStop[2],&TwoWayStop[2],&TwoWayStop[2],&TwoWayStop[2]}},
	{0x21,30000,{&TwoWayStop[2],&TwoWayStop[2],&TwoWayStop[3],&TwoWayStop[3]}},
	{0x22,5000,{&TwoWayStop[0],&TwoWayStop[0],&TwoWayStop[0],&TwoWayStop[0]}}
	
};


	

