//include header file of state switching to from here
#include <iostream>
#include "Cooler.h"

#include "CoolerIdleState.h" //state could switch to
#include "CoolerErrorState.h" //state could switch to

#include "CoolerRunningState.h"

CoolerRunningState:: CoolerRunningState(Cooler* cooler) : CoolerState(cooler)
{

}

void CoolerRunningState:: temperatureMonitor()
{

}

void CoolerRunningState::humidityMonitor()
{

}

void CoolerRunningState::LED()
{

}

void CoolerRunningState::display()
{
  
}