#pragma once
#define Student_hpp
#include "Persoon.hpp"

#include <stdio.h>

#include <string>
using std::string;

class Student : public Persoon {
    
    public:
        //default constructor
        Student();
        // constructor
        Student(string naam, int leeftijd, int studentNummer);
    
        //destructor
        ~Student();
    
        int studentNummer;
        int getNumber;
    
};
