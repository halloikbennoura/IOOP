#include "Persoon.hpp"
#include "Student.hpp"
#include "Docent.hpp"
#include <stdio.h>

#include <string>
using std::string;


//default constructor
Persoon :: Persoon() {
    
    naam = "Marian";
    leeftijd = 43;
}

//accessor methods: these provide access to retrieve and update the instance data
string Persoon::getName() {
    
    return naam;
}

int Persoon::getAge() {
    
    return leeftijd;
}
