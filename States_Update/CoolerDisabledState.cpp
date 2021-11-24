#include <iostream>
#include "Cooler.h"

#include "CoolerIdleState.h" //state could switch to

#include "CoolerDisabledState.h"

CoolerDisabledState:: CoolerDisabledState(Cooler* cooler) : CoolerState(cooler)
{

}

void CoolerDisabledState:: temperatureMonitor()
{

}

void CoolerDisabledState::humidityMonitor()
{

}

void CoolerDisabledState::LED()
{

}

void CoolerDisabledState::display()
{
  
}