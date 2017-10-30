#pragma once
#include "OpenbaarVervoer.hpp"

class Bus:public OpenbaarVervoer {
    
public:
    Bus(std::string vervoersmiddel);
    void prijsPerKm();
    void maxPassagiers();
    float prijs;
    int passagiers;
    
};
