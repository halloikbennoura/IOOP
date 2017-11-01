#include "Bibliotheek.hpp"
#include <string>


Bibliotheek::Bibliotheek()
{
}

Bibliotheek::Bibliotheek(const Bibliotheek& original)
{
    for (Boek* eersteLijst : original.boekenlijst) {
        Boek* boekcopy = new Boek(*eersteLijst);
        
        boekenlijst.push_back(boekcopy);
    }
}



Bibliotheek::~Bibliotheek()
{
    for (Boek* boek : boekenlijst) {
        delete boek;
    }
}

void Bibliotheek::voegBoekToe(std::string titel)
{
    Boek* boekpointer = new Boek(titel);
    boekenlijst.push_back(boekpointer);
    
}

void Bibliotheek::printBoekenlijst()
{
    for (Boek* boek : boekenlijst) {
        std::cout << boek->getTitel() << std::endl;
    }
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek & original)
{
    for (Boek* boek : boekenlijst) {
        delete boek;
        
        
    }
    
    boekenlijst.clear();

    
    return *this;
}
