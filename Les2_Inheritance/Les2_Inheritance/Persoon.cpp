#include "Persoon.hpp"
#include <stdio.h>

#include <string>
using std::string;

//----------------------------------------

Persoon :: Persoon() {
    
}

Persoon :: ~Persoon()
{
}

//accessor methods: these provide access to retrieve and update the instance data
string Persoon::getName(string naam) {
    
    persoonNaam = naam;
    return naam;
}

int Persoon::getAge(int leeftijd) {
    
    persoonLeeftijd = leeftijd;
    return leeftijd;
}
