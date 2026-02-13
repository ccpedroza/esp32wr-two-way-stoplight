/*
 * LightStates.h
 *
 *  Created on: Jan 25, 2026
 *      Author: Crispy
 */

#ifndef MAIN_LIGHTSTATES_H_
#define MAIN_LIGHTSTATES_H_

#include <stdint.h>
struct Intersection_State{
	uint32_t out;
	int time;
	const struct Intersection_State *Next[4];
};
typedef const struct Intersection_State Int_St;



extern Int_St TwoWayStop[4];

#endif /* MAIN_LIGHTSTATES_H_ */
