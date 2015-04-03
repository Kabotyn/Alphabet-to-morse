#include <iostream>
//#include <vector>

#include "Alphabet2Morse.h"

using namespace std;

// constructor without parameters, read text from user (cin)
Alphabet2Morse::Alphabet2Morse(void) {
	string text;
	cout << "Write text:" << endl;
	cin >> text;
	
}


// constructor with string param - on the begining there is possibility to 
// set alphabet text for convertion
Alphabet2Morse::Alphabet2Morse(string text) {
	setText(text);
}


// set text to morse
void Alphabet2Morse::setText(string text) {
	// change text to lower cases
	transform(text.begin(), text.end(), text.begin(), ::tolower);  
	alphabet_text = text;
}

// return alphabet_text
std::string Alphabet2Morse::getText(void) {
	return alphabet_text;
}

// transformt text to morse
void Alphabet2Morse::translate2Morse(void) {
	if (alphabet_text.length() < 1) {
		return; // exit function if alphatext is less than 1 char
	}
	string letter_separator = " ";
	string alphanum = "abcdefghijklmnopqrstuvwxyz1234567890 "; // space in the end is the rod separator
	morse.clear(); // clear morse vector
	vector<string> morse_codes(37);
	morse_codes[0] = ".-";		// a
	morse_codes[1] = "—...";	// b
	morse_codes[2] = "-.-.";	// c
	morse_codes[3] = "-..";		// d
	morse_codes[4] = ".";		// e
	morse_codes[5] = "..-.";	// f
	morse_codes[6] = "--.";		// g
	morse_codes[7] = "....";	// h
	morse_codes[8] = "..";		// i
	morse_codes[9] = ".---";	// j
	morse_codes[10] = "-.-";	// k
	morse_codes[11] = ".-..";	// l
	morse_codes[12] = "--";		// m
	morse_codes[13] = "-.";		// n
	morse_codes[14] = "---";	// o
	morse_codes[15] = ".--.";	// p
	morse_codes[16] = "--.-";	// q
	morse_codes[17] = ".-.";	// r
	morse_codes[18] = "...";	// s
	morse_codes[19] = "-";		// t
	morse_codes[20] = "..-";	// u
	morse_codes[21] = "...-";	// v
	morse_codes[22] = ".--";	// w
	morse_codes[23] = "-..-";	// x
	morse_codes[24] = "-.--";	// y
	morse_codes[25] = "--..";	// z
	morse_codes[26] = ".----";	// 1
	morse_codes[27] = "..---";	// 2
	morse_codes[28] = "...--";	// 3
	morse_codes[29] = "....-";	// 4
	morse_codes[30] = ".....";	// 5
	morse_codes[31] = "-....";	// 6
	morse_codes[32] = "--...";	// 7
	morse_codes[33] = "---..";	// 8
	morse_codes[34] = "----.";	// 9
	morse_codes[35] = "-----";	// 0
	morse_codes[36] = "/";	// space (word separator)
	
	// look for index of char in alphanum and this index is also for morse_codes
	size_t found;
	for (int i = 0; i < alphabet_text.length(); i++) {
		found = alphanum.find(alphabet_text[i]);
		if(found == string::npos) {
			continue;
		} else {
			morse.push_back(morse_codes[found]);
		}
	}
}	


void Alphabet2Morse::showMorse() {
	string show = "";
	for (int i = 0; i < morse.size(); i++) {
		show += morse[i];
		if (i < morse.size() - 1) {
			show += " ";
		}
	}
	cout << show;
}
