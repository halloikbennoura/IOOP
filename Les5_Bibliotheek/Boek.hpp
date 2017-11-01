#pragma once
#include <iostream>


class Boek
{
public:
    Boek(std::string titel);
    ~Boek();
    std::string getTitel();
    
    
private:
    std::string titel;
    
};
