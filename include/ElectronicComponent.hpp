#pragma once
#include<iostream>

class ElectronicComponent{
public:
    ElectronicComponent();
    void WorkCycle(int voltage_input);
private:
    int voltage_limit_min, voltage_limit_max;
};
