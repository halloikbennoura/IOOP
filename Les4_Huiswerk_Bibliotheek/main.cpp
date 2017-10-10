#include <iostream>
#include "Bibliotheek.cpp"
#include "Boek.cpp"
#include "Bibliotheek.hpp"
#include "Boek.hpp"

void boekTerugBrengen(Bibliotheek* kast) {
    std::cout << "Boek erbij" << std::endl;
    kast->toon();
    
    kast->voegToe("thriller");
    kast->toon();
}

int main() {
    Bibliotheek* kast = new Bibliotheek();
    kast->toon();
    
    kast->voegToe("mysterie");
    kast->toon();
    
    boekTerugBrengen(kast);
    kast->toon();
    
    return 0;
}

