#pragma once
#define Docent_hpp
#include "Persoon.hpp"

#include <stdio.h>

#include <string>
using std::string;


class Docent : public Persoon {
    
public:
    //default constructor
    Docent();
    // constructor
    Docent(string naam, int leeftijd, string docentVak);
    
    //destructor
    ~Docent();
    
    string getVak;
    string docentVak;

};
