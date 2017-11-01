#include <iostream>
#include <string>
#include "Bibliotheek.hpp"
#include "Boek.hpp"



int main()
{
    Bibliotheek bieb1;
    
    bieb1.voegBoekToe("De zwarte met het witte hart");
    bieb1.voegBoekToe("Imagine");
    bieb1.voegBoekToe("Fast times in Palestine");
    bieb1.voegBoekToe("Ready Player One");
    
    Bibliotheek bieb2(bieb1);
    
    bieb1.voegBoekToe("Designing for Interaction");
    bieb1.voegBoekToe("The Big 5");
    
    bieb2.voegBoekToe("De Kabeljauw");
    bieb2.voegBoekToe("Guantanamo Dagboek");
    
    std::cout << "Bieb 1" << std::endl;
    bieb1.printBoekenlijst();
    
    
    
    std::cout << std::endl << "Bieb 2" << std::endl;
    bieb2.printBoekenlijst();
    
    
    return 0;
}
