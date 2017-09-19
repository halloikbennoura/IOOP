#pragma once
#define Docent_hpp
#include "Persoon.hpp"

#include <stdio.h>

#include <string>
using std::string;

// hij herkent de Persoon class niet en ik weet niet waarom
class Docent: public Persoon {
private:
    string docentVak;
    
public:
    //default constructor
    Docent();
    // constructor
    Docent(string naam, int leeftijd, string docentVak);
    
    //destructor
    ~Docent();
    
    string getVak;


};
