#ifndef __LEARNING_GEM5_HELLO_OBJECT_HH__
#define __LEARNING_GEM5_HELLO_OBJECT_HH__

#include "params/HelloObject.hh"
#include "sim/sim_object.hh"
#include "learning_gem5/goodbye_object.hh"
class HelloObject : public SimObject
{
  private:
          void processEvent();
          //EventWrapper<HelloObject, &HelloObject::processEvent> event;
          EventFunctionWrapper event;
          /// Pointer to the corresponding GoodbyeObject. Set via Python
          GoodbyeObject *goodbye;
          /// The name of this object in the Python config file
          const std::string myName;
          /// Latency between calling the event (in ticks)
          const  Tick latency;
          /// Number of times left to fire the event before goodbye
          int timesLeft;				

          
  public:
          HelloObject(HelloObjectParams *p);
          
          void startup();
};

#endif // __LEARNING_GEM5_HELLO_OBJECT_HH__
