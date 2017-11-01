#include "Docent.hpp"
#include <stdio.h>

#include <string>
using std::string;


//default constructor
Docent :: Docent(string naam, int leeftijd, string docentVak) {
    
    persoonNaam = naam;
    persoonLeeftijd = leeftijd;
    getNumber = docentVak;
    
}


int Docent::getVak() {
    
    return docentVak;
}
