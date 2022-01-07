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
	pidC->Kp = 1;
	pidC->Td = 1;
	pidC->Ti = 1;
	pidC->referenceSignal = 0;
	pidC->controlError[0] = 0;
	pidC->controlError[1] = 0;
	pidC->sumOfControlError = 0;
}

void CalculateControlSignal(){
	uint32_t sum = 0;
	for(uint8_t i = 0; i < SIZE; i++){
		sum = sum + measurmentsVector[i];
	}
	// Calculated value of current RPM
	pidController.measuredSpeed = sum/SIZE;

	// Controll error handling in preparation for calculating control signal
	pidController.controlError[1] = pidController.controlError[0];
	pidController.controlError[0] = (pidController.referenceSignal - pidController.measuredSpeed);
	pidController.sumOfControlError += pidController.controlError[0];

	// Calculate control signal
	pidController.controlSignal = pidController.Kp * (1 * pidController.controlError[0] + pidController.sumOfControlError * 1/pidController.Ti +
								  pidController.Td * (pidController.controlError[0] - pidController.controlError[1]));
}
