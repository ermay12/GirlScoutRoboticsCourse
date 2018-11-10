
// include the JourneyLibrary so that we can perform actions on the robot and
// sense the environment
#include "JourneyLibrary.h"


// This is the main function, where the code starts.  All C programs
// must have a main() function defined somewhere.
int main()
{
	
	
	//Setup the robot and calibrate the sensors
	robotSetup();
	
	// This is the "main loop" - it will run forever.
	while(1)
	{
		
		//see if we are above the line or next to the line
		if(readCenterLightSensor() > 50)
		{
			//if we are next to the line turn left so we reach the line
			setMotors(0,40);
			// Just for fun, indicate the direction we are turning on
			// the LEDs.
			leftLed(1);
			rightLed(0);
		}
		else 
		{
			//if we are over the line, turn right
			setMotors(40, 0);
			leftLed(0);
			rightLed(1);
		}
	}
}
