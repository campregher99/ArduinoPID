#ifndef ARDUINO_PID_H
#define ARDUINO_PID_H 
#include "PID.h"
#ifndef OUTPUT
#define OUTPUT 13
#endif

class ArduinoPID : public PID
{
private:
	DOUBLE freq=1;
public:
	ArduinoPID()=default;
	ArduinoPID(const DOUBLE& _kp, const DOUBLE& _ki = 0, const DOUBLE& _kd = 0):PID(_kp, _ki, _kd);
	~ArduinoPID();
	DOUBLE generatePWM();
	bool calculateErr();
	bool autoKSet();
	DOUBLE derivate();

	
};

#endif