#ifndef RBE3001_GRIPPER_SERVER
#define RBE3001_GRIPPER_SERVER

//#include <PID_Bowler.h>
#include <PacketEvent.h>
#include <cmath>              // needed for std::abs
#include "Servo.h"
#include "mbed.h"
#include "main.h"

#define GRIPPER_SERVO PB_10
#define GRIPPER_SERVER 05

class GripperServer: public PacketEventAbstract
{
  private:
  Servo * myServo;

  public:
  GripperServer (Servo* aServo)
    : PacketEventAbstract(GRIPPER_SERVER) {
      myServo = aServo;
    }

  // This method is called every time a packet from MATLAB is received
  // via HID
  void event(float * buffer);
};

#endif /* end of include guard: RBE3001_STATUS_SERVER */
