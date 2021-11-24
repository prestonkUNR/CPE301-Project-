#pragma once
#include "CoolerState.h"

class CoolerDisabledState : public CoolerState
{
  public:
    CoolerDisabledState(Cooler* cooler);
    void temperatureMonitor();
    void humidityMonitor();
    void LED();
    void display();

};