//definitions

#include "Cooler.h"
//include the state that it's initially in
#include "CoolerDisabledState.h"

Cooler::Cooler(): currentState(new CoolerDisabledState(this))
{
    //set up initial state by state. above
   
}

void Cooler::temperatureMonitor(){
  //whatever the current state is just calls their tempMon. fcn
    currentState -> temperatureMonitor();
}

void Cooler::humidityMonitor(){
  currentState -> humidityMonitor();
}

void Cooler::LED(){
  currentState->LED();
}

void Cooler::display(){
  currentState->display();
}

template <typename T>
void Cooler::changeState(){
    cout << "Changing State... \n";

    //delete to avoid memory leaks
    delete currentState;
    //update the currentState
    currentState = new T(this);

}