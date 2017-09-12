// iostream is needed in order to run this file
#include <iostream>
#include <string>

//standard library
using namespace std;

class LesRooster{
    
public:
    void setName(string x) {
        Cursus = x;
    }
    string getName() {
        return Cursus;
    }
    
private:
    string Cursus;
    int Datum;
    int Tijd;
    string Gebouw;
    string Lokaal;
    string Groep;
    string Docent;
    
    
};


int main() {
    
    LesRooster rooster;
    rooster.setName("Intro Object Oriented Programming");
    cout << rooster.getName();
    
    return 0;
};
