#include <iostream>
#include <fstream>

#define FILE "/Users/macbookair/Desktop/School/Extra halfjaar/ObjectOriented/IOOP/Les6/Les6_Backwards/Backwards_FILE.txt"

int characterCount() {
    char ch;
    //lezen uit een file
    std::ifstream in_stream;
    
    int count = 0;
    
    in_stream.open(FILE);
    if (!in_stream) {
        std::cout <<"Probleem bij openen file" << std::endl;
        exit(1);
    }
    
    in_stream.get(ch);
    while (!in_stream.fail()) {
        count++;
        in_stream.get(ch);
    }
    in_stream.close();
    
    std::cout << count << " characters in bestand\n" << std::endl;
    
    return count;
}

char getCharacterPosition(int number) {
    char ch;
    std::ifstream fileInput;
    
    fileInput.open(FILE);
    for (int i = 0; i < number; i++) {
        fileInput.get(ch);
    }
    fileInput.close();
    return ch;
}

int main() {
    int count;
    
    std::ofstream out_stream;
    out_stream.open("/Users/macbookair/Desktop/School/Extra halfjaar/ObjectOriented/IOOP/Les6/Les6_Backwards/Backwards_OUT.txt"); //file aanmaken

    count = characterCount();
    
        for (int number = count; number > 0; number--) {
            out_stream << getCharacterPosition(number);

            //mijn file wil niet openen (?) dus ik print het ook even uit in de console!
            std::cout << getCharacterPosition(number);
        }
    
    out_stream.close();
    
    return 0;
}
