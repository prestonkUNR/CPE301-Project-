#pragma once
#include "CoolerState.h"

class CoolerErrorState : public CoolerState
{
  public:
    CoolerErrorState(Cooler* cooler);
    void temperatureMonitor();
    void humidityMonitor();
    void LED();
    void display();

};