/*
 * pid.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Szymon
 */
#include "pid.h"

PID pidController;
uint32_t measurmentsVector[10];

void InitPID(){
	pidController.Kp = 0.2006;
	pidController.Kd = 0.009549517991959;
	pidController.Ki = 23.700532809609300;
	pidController.N = 4371;
	pidController.sampleTime = 0.005;
	pidController.referenceSignal = 0;
	pidController.controlError[0] = 0;
	pidController.controlError[1] = 0;
	pidController.measuredSpeed = 0;
	pidController.sumOfIntegral = 0;
	pidController.previousD = 0;
	pidController.controlSignal = 0;
}

