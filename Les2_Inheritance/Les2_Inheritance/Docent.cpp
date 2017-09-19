#include "Persoon.hpp"
#include "Student.hpp"
#include "Docent.hpp"
#include <stdio.h>

#include <string>
using std::string;


//default constructor
Docent :: Docent() {
    
    naam = "Marian";
    leeftijd = 43;
    docentVak = Aardrijkskunde;
}

//accessor methods: these provide access to retrieve and update the instance data
string Docent::getVak() {
    
    return docentVak;
}
