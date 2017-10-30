#include "Trein.hpp"
#include <iostream>

void Trein::prijsPerKm()
{
    prijs = 4.95;
    std::cout << "\nTreinkaartje kost €" << prijs << std::endl;
    
}

void Trein::maxPassagiers() {
    passagiers = 45;
    std::cout << "Het maximale aantal passagiers is " << passagiers << std::endl;
}

Trein::Trein(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}
