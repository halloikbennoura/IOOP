#pragma once
#define Student_hpp
#include "Persoon.hpp"

#include <stdio.h>

#include <string>
using std::string;

// hij herkent de Persoon class niet en ik weet niet waarom
class Student: public Persoon {
private:
    int studentNummer;
    
public:
    //default constructor
    Student();
    // constructor
    Student(string naam, int leeftijd, int studentNummer);
    
    //destructor
    ~Student();
    
    int getNumber;

    
    
};
