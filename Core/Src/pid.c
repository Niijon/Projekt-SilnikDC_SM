/*
 * pid.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Szymon
 */


PID pidController;
uint32_t measurmentsVector[10];

void InitPID(PID *pidC){
	pidC->Kp = 1;
	pidC->Td = 1;
	pidC->Ti = 1;
	pidC->referenceSignal = 0;
}

void CalculateControlSignal(){
	double sum = 0;
	for(uint8_t i = 0; i < SIZE; i++){
		sum = sum + measurmentsVector[i];
	}
	pidController.measuredSignal = sum/SIZE;
}

void MeasureRPM(){

}
