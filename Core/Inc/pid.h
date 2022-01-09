/*
 * pid.h
 *
 *  Created on: Jan 7, 2022
 *      Author: Szymon
 */

#ifndef INC_PID_H_
#define INC_PID_H_

// Includes
#include <stdint.h>

// Defines
#define SIZE 10

/* PID controller with  */
typedef struct PID{
	double referenceSignal;
	double controlSignal;
	double Kp;
	double Ti;
	double Td;
	double measuredSpeed;
	double controlError[2];
	uint32_t sumOfControlError;

} PID;

extern PID pidController;

void InitPID(PID *pidC);
#endif /* INC_PID_H_ */
