#include<iostream>
#include"VoltageSource.hpp"
#include"ElectronicComponent.hpp"
#include"VoltageSurgeException.hpp"


void TripCircuitBreaker(){
    std::cout << "Circuit Breaker has been tripped!" << std::endl;
}


int main(){
    std::cout << "Initializing Electrical Circuit..." << std::endl;
    VoltageSource VCC(12, 24);
    ElectronicComponent EC;

    for(int i = 0; i < 30; i++){
        try{
            std::cout << "[" << i + 1 << "]" << " - ";
            EC.WorkCycle(VCC.GenerateVoltage());
        }catch(VoltageSurgeException& e){
            std::cout << e.what() << std::endl;
            TripCircuitBreaker();
            return -1;
        }
    }

    std::cout << "Electrical Circuit finished its job." << std::endl;
    return 0;
}