#pragma once
#include "OpenbaarVervoer.hpp"


class Trein:public OpenbaarVervoer {
    
public:
    Trein(std::string vervoersmiddel);
    void prijsPerKm();
    void maxPassagiers();
    float prijs;
    int passagiers;
    
};
