#pragma once
#include "Boek.hpp"

#include <stdio.h>

class Bibliotheek {
public:
    Bibliotheek();
    void toon();
    
    //methode aanmaken met type string
    void voegToe(std::string type);
    
private:
    Boek* boek = new Boek();
};

