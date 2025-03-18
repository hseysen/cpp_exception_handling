#include"ElectronicComponent.hpp"
#include"VoltageSurgeException.hpp"

ElectronicComponent::ElectronicComponent(){
    std::cout << "Electronic Component added to the circuit." << std::endl;
    voltage_limit_min = 12;
    voltage_limit_max = 24;
}

void ElectronicComponent::WorkCycle(int voltage_input){
    if(voltage_input < voltage_limit_min){
        std::cout << "Not enough voltage. Couldn't generate output in this cycle" << std::endl;
        return;
    }

    if(voltage_input > voltage_limit_max){
        throw VoltageSurgeException(voltage_input);
    }

    std::cout << "Sufficient voltage was supplied in this cycle: " << voltage_input << " V. Successfully completed the work cycle!" << std::endl;
}