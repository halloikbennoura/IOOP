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
string Persoon::getName() {
    
    persoonNaam = naam;
    return naam;
}

int Persoon::getAge() {
    
    persoonLeeftijd = leeftijd;
    return leeftijd;
}
