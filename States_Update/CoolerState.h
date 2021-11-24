#pragma once

class Cooler;

class CoolerState{
    public:
    //constructor has a cooler so that can easily change states
    CoolerState(Cooler* cooler);
    virtual ~CoolerState();

    //making pure virual means that ev. class that inherits from it has to define the fcn
    virtual void temperatureMonitor() = 0;
    virtual void humidityMonitor() = 0;
    virtual void LED() = 0;
    virtual void display() = 0;
    virtual void babyMonitor();

    protected:
    Cooler* CoolerObj;

};