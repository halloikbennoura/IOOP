#include "Persoon.hpp"
#include "Student.hpp"
#include "Docent.hpp"
#include <stdio.h>

#include <string>
using std::string;


//default constructor
Student :: Student() {
    
    naam = "Sue";
    leeftijd = 19;
    studentNummer = 440094;
}

//accessor methods: these provide access to retrieve and update the instance data
string Student::getName() {
    
    return studentNummer;
}
