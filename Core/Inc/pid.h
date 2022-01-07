/*
 * pid.h
 *
 *  Created on: Jan 7, 2022
 *      Author: Szymon
 */

#ifndef INC_PID_H_
#define INC_PID_H_

#define SIZE 10

extern uint32_t measurmentsVector[10];

/* PID controller with  */
typedef struct PID{
	uint32_t referenceSignal;
	double controlSignal;
	double Kp;
	double Ti;
	double Td;
	uint32_t measuredSpeed;
} PID;

extern PID pidController;

void InitPID(PID *pidC);

void CalculateControlSignal();

void MeasureRPM();
#endif /* INC_PID_H_ */
