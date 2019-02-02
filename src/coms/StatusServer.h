#ifndef RBE3001_STATUS_SERVER
#define RBE3001_STATUS_SERVER


#include <PID_Bowler.h>
#include <PacketEvent.h>
#include "../drivers/MyPid.h"
#include <cmath>
          // needed for std::abs

#define STATUS_SERVER_ID 03

class StatusServer: public PacketEventAbstract
{
  private:
  PIDimp ** myObjects;
  int myPumberOfPidChannels;

  public:
  StatusServer (PIDimp ** pidObjects, int numberOfPidChannels)
    : PacketEventAbstract(STATUS_SERVER_ID)
  {
    myObjects = pidObjects;
    myPumberOfPidChannels = numberOfPidChannels;
  }
  StatusServer ()
    : PacketEventAbstract(STATUS_SERVER_ID){ }

  // This method is called every time a packet from MATLAB is received
  // via HID
  void event(float * buffer);

};

#endif /* end of include guard: RBE3001_STATUS_SERVER */
