#include"VoltageSource.hpp"

VoltageSource::VoltageSource(int min_voltage, int max_voltage){
    v_min = min_voltage;
    v_max = max_voltage;
    std::srand(std::time(0));
}

int VoltageSource::GenerateVoltage(){
    int random_number = v_min + (std::rand() % (v_max - v_min + 1));

    // 15% probability to generate 10 V extra
    int probability = std::rand() % 100;
    if (probability < 15) {
        random_number += 10;
    }

    return random_number;
}
