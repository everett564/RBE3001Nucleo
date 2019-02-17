#ifndef RBE3001_GRIPPER_SERVER
#define RBE3001_GRIPPER_SERVER


#include <PID_Bowler.h>
#include <PacketEvent.h>
#include "../drivers/MyPid.h"
#include <cmath>              // needed for std::abs

#define GRIPPER_SERVER 5
#define GRIPPER_SERVO PB_10

class GripperServer: public PacketEventAbstract
{

  public:
  GripperServer ()
    : PacketEventAbstract(GRIPPER_SERVER)
  {

  }

  // This method is called every time a packet from MATLAB is received
  // via HID
  void event(float * buffer);
};

#endif /* end of include guard: RBE3001_STATUS_SERVER */
