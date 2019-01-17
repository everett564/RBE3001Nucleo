#ifndef RBE3001_STATUS_SERVER
#define RBE3001_STATUS_SERVER


#include <PacketEvent.h>
#include <cmath>              // needed for std::abs

#define STATUS_SERVER_ID 01

class StatusServer: public PacketEventAbstract
{

 public:
  StatusServer ()
    : PacketEventAbstract(STATUS_SERVER_ID){ }

  // This method is called every time a packet from MATLAB is received
  // via HID
  void event(float * buffer);
};

#endif /* end of include guard: RBE3001_STATUS_SERVER */
