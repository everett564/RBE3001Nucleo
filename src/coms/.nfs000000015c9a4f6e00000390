
#include "GripperServer.h"
#include "Servo.h"
#include "mbed.h"
/**
 *  @brief This function handles incoming HID packets from MATLAB.
 *
 *  @description This method has two parts: in part 1, we will decode the incoming
 *               packet, extract the setpoints and send those values to the
 *               PID controller; in part 2, we will generate a response that will be
 *               sent back to MATLAB through HID. This is useful to e.g. send sensor
 *               data to MATLAB for plotting.
 */
void GripperServer::event(float * packet){

 Servo myservo(GRIPPER_SERVO, 20);


if(packet){
  for(int i=0; i<100; i++) {
      myservo = i/100.0;
      wait(0.01);
  }

}
else{
  for(int i=100; i>0; i--) {
      myservo = i/100.0;
      wait(0.01);
  }
}
/*
  for (int i = 0; i < myPumberOfPidChannels; i++)
    {
      float setpoint = packet[(i)+0];
      float position = myObjects[i]->GetPIDPosition();
      float timeOfMotion = 0;

      // When polling for the current positon, we are passing down setpoints over and over. If the setpoint is already set we want to skip
      // Bound function is checking the incoming value agains the previouslt set value
      bool newUpdate = !myObjects[i]->bound(setpoint,
					       myObjects[i]->state.interpolate.set,
					       0.01,   // is the incoming setpoint plus 0.01 from the last setpoint
					       0.01);// is the incoming setpoint minus 0.01 from the last setpoint
      // If the incoming value is outside of the previous value, then we actually set the PID controller
      if(newUpdate){
    	  // disable interrupts first
    	  __disable_irq();
        myObjects[i]->SetPIDEnabled(true);
    	  // go to setpoint in timeOfMotion ms, linear interpolation
    	  myObjects[i]->SetPIDTimed(setpoint, timeOfMotion);
    	  // re-enable interrupts
    	 __enable_irq();
    	}
    }
*/
/*
sends packet values
// */
//   for(int i = 0; i <= 2; i++)
//     {
//       float position = myObjects[i]->GetPIDPosition();
//       float velocity = myObjects[i]->getVelocity();
//
//       packet[(i)+0] = position;
//       packet[(i)+3] = velocity;
      // theres a third space here you can add it later if needed

}
