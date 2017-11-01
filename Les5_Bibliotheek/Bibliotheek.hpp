#pragma once
#include <iostream>
#include <vector>
#include "Boek.hpp"

class Bibliotheek
{
public:
    Bibliotheek();
    Bibliotheek(const Bibliotheek& original);
    ~Bibliotheek();
    void voegBoekToe(std::string titel);
    void printBoekenlijst();
    Bibliotheek& operator=(const Bibliotheek& original);
    
private:
    std::vector<Boek*> boekenlijst;
    
};
