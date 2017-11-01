#pragma once
#include <stdio.h>

#include <string>
using std::string;


class Persoon {

    
//list all functions for this class
public:
    //default constructor
    Persoon();
    // constructor
    Persoon(string, int);
    
    //destructor
    ~Persoon();


    string naam;
    int leeftijd;
    
    string persoonNaam;
    int persoonLeeftijd;
    
    
    //accessor of mutator? methods
    string getName();
    int getAge();
    string getVak();
    
};

