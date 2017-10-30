#include <iostream>
#include <vector>
#include "Bus.hpp"
#include "Trein.hpp"
#include "Metro.hpp"
#include "OpenbaarVervoer.hpp"


// Deze opdracht heb ik gemaakt samen met Nadine

void saySomething(OpenbaarVervoer& vervoer) {
    vervoer.prijsPerKm();
    vervoer.maxPassagiers();
}

void saySomething(OpenbaarVervoer* vervoer) {
    vervoer->prijsPerKm();
}


int main() {
    Metro metro1 = Metro("Utrecht Centraal");
    Trein trein1 = Trein("Eindhoven");
    Bus bus1 = Bus("Marnixstraat");
    
    metro1.prijsPerKm();
    metro1.maxPassagiers();
    
    trein1.prijsPerKm();
    trein1.maxPassagiers();
    bus1.prijsPerKm();
    bus1.maxPassagiers();
    
    
//    saySomething(metro1);
//    saySomething(trein1);
//    saySomething(bus1);
    
    std::cout << "\nDe metro levert in totaal €" << metro1.prijs*metro1.passagiers << " op" << std::endl;
    std::cout << "De trein levert in totaal €" << trein1.prijs*trein1.passagiers << " op" << std::endl;
    std::cout << "De bus levert in totaal €" << bus1.prijs*bus1.passagiers << " op \n" << std::endl;
    
    return 0;
}
