
#include "StatusServer.h"

/**
 *  @brief This function handles incoming HID packets from MATLAB.
 *
 *  @description This method has two parts: in part 1, we will decode the incoming
 *               packet, extract the setpoints and send those values to the
 *               PID controller; in part 2, we will generate a response that will be
 *               sent back to MATLAB through HID. This is useful to e.g. send sensor
 *               data to MATLAB for plotting.
 */
void StatusServer::event(float * packet){

/*
sends packet values
*/
  for(int i = 0; i < 2; i++)
    {
      //float position = myObjects[i]->GetPIDPosition();
      //float velocity = myObjects[i]->getVelocity();

      packet[(i*3)+0] = 5.0;
      packet[(i*3)+1] = 2.0;
      // theres a third space here you can add it later if needed
    }
}
