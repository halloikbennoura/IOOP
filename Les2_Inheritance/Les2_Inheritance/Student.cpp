#include "Student.hpp"
#include <stdio.h>

#include <string>
using std::string;


//default constructor
Student :: Student(string naam, int leeftijd, int nummer) {
    
    persoonNaam = naam;
    persoonLeeftijd = leeftijd;
    studentNummer = nummer;
    
}


//accessor methods: these provide access to retrieve and update the instance data


int Student::getNumber() {
    
    return studentNummer;
}
