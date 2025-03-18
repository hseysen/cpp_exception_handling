#pragma once
#include<stdexcept>

class VoltageSurgeException : public std::runtime_error {  
public:  
    VoltageSurgeException(double voltage): std::runtime_error("Voltage surge detected: " + std::to_string(voltage) + " V") {}  
};