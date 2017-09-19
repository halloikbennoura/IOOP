#pragma once
#define Persoon_hpp
#include "Student.hpp"
#include "Docent.hpp"
#include <stdio.h>

#include <string>
using std::string;


class Persoon {
private:
    string naam;
    int leeftijd;
    
//list all functions for this class
public:
    //default constructor
    Persoon();
    // constructor
    Persoon(string, int);
    
    //destructor
    ~Persoon();

    
    
    //accessor of mutator? methods
    string getName();
    int getAge();
    
};

