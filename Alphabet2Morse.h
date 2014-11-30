#include <vector>

class Alphabet2Morse {
private:
	std::string alphabet_text;
	std::vector<std::string> morse;
	
public:
	Alphabet2Morse(void);
	Alphabet2Morse(std::string);
	
	void setText(std::string);
	std::string getText(void);
	void translate2Morse(void);
	
	void showMorse(void);
	
	std::vector<std::string> getMorse(std::string);
	
};