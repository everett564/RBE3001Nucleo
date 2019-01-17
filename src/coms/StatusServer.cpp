
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


  // // we will be using the same memory area in which the incoming packet was stored,
  // // however, a we need to perform a type cast first (for convenience).
  // uint8_t * buff = (uint8_t *) packet;
  //
  // // re-initialize the packet to all zeros
  // for (int i = 0; i < 60; i++)
  //     buff[i] = 0;

  /**
   * The following loop reads sensor data (encoders ticks, joint velocities and
   * force readings) and writes it in the response packet.
   */
  for(int i = 0; i < 2; i++)
    {
      //float position = myObjects[i]->GetPIDPosition();
      //float velocity = myObjects[i]->getVelocity();

      packet[(i*3)+0] = 5.0;
      packet[(i*3)+1] = 2.0;
    }
}
// /**
//  * RBE3001 - Nucleo Firmware
//  * See header file for more detail on this class.
//  */
// #include "StatusServer.h"
//
// /**
//  *  @brief This function handles incoming HID packets from MATLAB.
//  *
//  *  @description This method has two parts: in part 1, we will decode the incoming
//  *               packet, extract the setpoints and send those values to the
//  *               PID controller; in part 2, we will generate a response that will be
//  *               sent back to MATLAB through HID. This is useful to e.g. send sensor
//  *               data to MATLAB for plotting.
//  */
// void StatusServer::event(float * packet){
//
//   /*
//    * ======= PART 1: Decode setpoints and send commands to the PID controller ==
//    */
//
//
//   uint8_t * buff = (uint8_t *) packet;
//
//   // re-initialize the packet to all zeros
//   for (int i = 0; i < 60; i++)
//       buff[i] = 0;
//
//   /**
//    * The following loop reads sensor data (encoders ticks, joint velocities and
//    * force readings) and writes it in the response packet.
//    */
//   for(int i = 0; i < myPumberOfPidChannels; i++)
//     {
//       float position = myPidObjects[i]->GetPIDPosition();
//       float velocity = myPidObjects[i]->getVelocity();
//       float torque   = myPidObjects[i]->loadCell->read();
//
//       packet[(i*3)+0] = position;
//       packet[(i*3)+1] = velocity;
//       packet[(i*3)+2] = torque;
//     }
// }
