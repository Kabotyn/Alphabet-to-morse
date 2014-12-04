#include <iostream>
#include "Alphabet2Morse.h"

#include <fstream>

int main (int argc, char * const argv[]) {
    
//    Alphabet2Morse a2m;
//	a2m.setText("DuPa BlAdA");
//	std::cout << "Normal text: " << a2m.getText() << std::endl;
//	std::cout << "Morse text: ";
//	a2m.translate2Morse();
//	a2m.showMorse();
//	std::cout << std::endl;
	
	std::ofstream stream("./../../test.wav", std::ios::binary);
	stream.write("RIFF", 4);
	
    return 0;
}
