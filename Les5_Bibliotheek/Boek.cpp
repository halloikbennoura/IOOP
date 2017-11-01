#include "Boek.hpp"

Boek::Boek(std::string titel)
: titel(titel) {}


Boek::~Boek() {}

std::string Boek::getTitel()
{
    return titel;
}
