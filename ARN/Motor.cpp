#include "Motor.h"

Motor::Motor() {}

Motor::Motor(int _enable, int _inA, int _inB) :
	enable(_enable), inA(_inA), inB(_inB)
{
	pinMode(enable, OUTPUT);
	pinMode(inA, OUTPUT);
	pinMode(inB, OUTPUT);
}

void Motor::forward(int speed) {
	analogWrite(enable, speed);
	digitalWrite(inA, HIGH);
	digitalWrite(inB, LOW);
}

void Motor::backward(int speed) {
	analogWrite(enable, speed);
	digitalWrite(inA, LOW);
	digitalWrite(inB, HIGH);
}

void Motor::hardStop() {
	analogWrite(enable, 255);
	digitalWrite(inA, LOW);
	digitalWrite(inB, LOW);
}

void Motor::softStop() {
	analogWrite(enable, 0);
	digitalWrite(inA, LOW);
	digitalWrite(inB, LOW);
}