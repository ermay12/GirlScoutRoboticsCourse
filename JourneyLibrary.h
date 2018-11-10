
#ifndef _JOURNEY_LIBRARY_H_
#define _JOURNEY_LIBRARY_H_



#include <pololu/3pi.h>
#include <avr/pgmspace.h>


void robotSetup();

void setMotors(int leftMotor, int rightMotor);

void leftLed(int on);

void rightLed(int on);

int readFarLeftLightSensor();

int readLeftLightSensor();

int readCenterLightSensor();

int readRightLightSensor();

int readFarRightLightSensor();

void wait(int milliSeconds);

#endif