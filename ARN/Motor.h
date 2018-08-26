#ifndef MOTOR_H_INCLUDED
#define MOTOR_H_INCLUDED

#include <Arduino.h>

class Motor {
protected:
	int enable;
	int inA;
	int inB;
	
public:
	Motor();
	Motor(int _enable, int _inA, int _inB);
	
	void forward(int speed = 255);
	void reverse(int speed = 255);
	void hardStop();
	void softStop();
};

#endif //MOTOR_H_INCLUDED