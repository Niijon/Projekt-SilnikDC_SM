/*
 * pid.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Szymon
 */
#include "pid.h"

PID pidController;
uint32_t measurmentsVector[10];

void InitPID(PID *pidC){
	pidC->Kp = 8.8462;
	pidC->Td = 0.078;
	pidC->Ti = 0.0312;
	pidC->referenceSignal = 0;
	pidC->controlError[0] = 0;
	pidC->controlError[1] = 0;
	pidC->measuredSpeed = 0;
	pidC->sumOfControlError = 0;
}

