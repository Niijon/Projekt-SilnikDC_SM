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
	double Ki;
	double Kd;
	double measuredSpeed;
	double controlError[2];
	double sumOfIntegral;
	double N;
	double sampleTime;
	double previousD;
} PID;

extern PID pidController;

void InitPID();
#endif /* INC_PID_H_ */
