//definitions
#include "Cooler.h"

Cooler::Cooler(){
    //set up initial state
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