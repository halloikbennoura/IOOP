#pragma once
#include <string>
#include <stdio.h>

class OpenbaarVervoer
{
public:
    
    OpenbaarVervoer(const std::string& vervoersmiddel);
    virtual void prijsPerKm() = 0;
    virtual void maxPassagiers() = 0;
    
    OpenbaarVervoer();
    
    
private:
    std::string vervoersmiddel;
};
