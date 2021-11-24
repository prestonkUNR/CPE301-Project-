
#include <iostream>
#include "Cooler.h"

#include "CoolerIdleState.h" //state could switch to

#include "CoolerErrorState.h"

CoolerErrorState :: CoolerErrorState(Cooler* cooler) 
: CoolerState(cooler)
{

}

void CoolerErrorState :: temperatureMonitor()
{

}

void CoolerErrorState :: humidityMonitor()
{

}

void CoolerErrorState :: LED()
{

}

void CoolerErrorState :: display()
{
  
}