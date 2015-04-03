#include <iostream>
#include "Alphabet2Morse.h"

#include <fstream>

int main (int argc, char * const argv[]) {
    
    Alphabet2Morse a2m;
	std::cout << "Normal text: " << a2m.getText() << std::endl;
	std::cout << "Morse text: ";
	a2m.translate2Morse();
	a2m.showMorse();
	std::cout << std::endl;

    return 0;
}
