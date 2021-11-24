#pragma once

#include "CoolerState.h"

class CoolerIdleState : public CoolerState
{
  public:
    CoolerIdleState(Cooler* cooler);
    void temperatureMonitor();
    void humidityMonitor();
    void LED();
    void display();

};