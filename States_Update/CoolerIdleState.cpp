#include <iostream>
#include "Cooler.h"

#include "CoolerRunningState.h" //state could switch to 
#include "CoolerErrorState.h" //state could switch to

#include "CoolerIdleState.h"

CoolerIdleState:: CoolerIdleState(Cooler* cooler) : CoolerState(cooler)
{

}

void CoolerIdleState:: temperatureMonitor()
{

}

void CoolerIdleState::humidityMonitor()
{

}

void CoolerIdleState::LED()
{

}

void CoolerIdleState::display()
{
  
}

