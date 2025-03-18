#pragma once
#include<cstdlib>
#include<ctime>
#include<iostream>

class VoltageSource{
public:
    VoltageSource(int min_voltage, int max_voltage);
    int GenerateVoltage();
private:
    int v_min, v_max;
};
