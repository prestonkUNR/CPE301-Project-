#pragma once

#include <iostream>
using namespace std;

class CoolerState;

class Cooler{
  //fcns tempmonitor, humiditymonitor, led, changestate, display
  Cooler();

  void temperatureMonitor();
  void humidityMonitor();
  void LED();
  void display();

  //templated fcn so can supply the new type as a parameter
  template <typename T>
  void changeState();

  private:
    //has A
    CoolerState* currentState;
};

/*template <typename T>
void Cooler::changeState(){
    cout << "Changing State... \n";

    //delete to avoid memory leaks
    delete currentState;
    //update the currentState
    currentState = new T(this);

}*/



