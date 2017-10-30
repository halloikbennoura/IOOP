#include "Bus.hpp"
#include <iostream>

void Bus::prijsPerKm()
{
    prijs = 1.50;
    std::cout << "\nBuskaartje kost €" << prijs << std::endl;
    
}

void Bus::maxPassagiers() {
    passagiers = 45;
    std::cout << "Het maximale aantal passagiers is " << passagiers << std::endl;
}

Bus::Bus(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}
