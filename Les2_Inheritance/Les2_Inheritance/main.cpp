#include <iostream>
#include "Persoon.hpp"
#include "Docent.hpp"
#include "Student.hpp"

#include <string>
using std::string;


int main() {
    
    void printPersoon(Persoon);
    
    Persoon docent1("Marian", 43);
    
    Persoon student1("Kees", 22);
    
    printPersoon(docent1);
    printPersoon(student1);
    return 0;
    
    std::cout <<"Docent: " << docent1.getName();
    std::cout <<"Leeftijd: " << docent1.getAge();
}
