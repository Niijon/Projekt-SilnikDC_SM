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

/* PID controller with  */
typedef struct PID{
	double referenceSignal; // Current Reference signal
	double controlSignal; // Current Control signal value
	double Kp; // Proportional gain
	double Ki; // Integral gain
	double Kd; // Derivative gain
	double measuredSpeed; // Current measured rotational speed[RPM]
	double controlError[2]; // Current control error - [1], last control error - [0]
	double sumOfIntegral; // Sum of integral 
	double N; // Oreder of derivative filter
	double sampleTime; // Sampling time 
	double previousD; // Previous derivative control signal
} PID;

extern PID pidController;

void InitPID();
#endif /* INC_PID_H_ */
