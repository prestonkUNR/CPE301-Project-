#pragma once

#include "CoolerState.h"

class CoolerRunningState : public CoolerState
{
  public:
    CoolerRunningState(Cooler* cooler);
    void temperatureMonitor();
    void humidityMonitor();
    void LED();
    void display();

};