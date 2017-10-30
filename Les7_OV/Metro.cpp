#include "Metro.hpp"
#include <iostream>

void Metro::prijsPerKm()
{
    prijs = 2.35;
    std::cout << "Metrokaartje kost €" << prijs << std::endl;
    
}

void Metro::maxPassagiers() {
    passagiers = 80;
    std::cout << "Het maximale aantal passagiers is " << passagiers << std::endl;
}

Metro::Metro(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}
