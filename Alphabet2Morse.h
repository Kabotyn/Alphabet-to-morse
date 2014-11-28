#include <vector>

class Alphabet2Morse {
private:
	std::string alphabet_text;
	std::vector<std::string> morse;
	
public:
	Alphabet2Morse(void);
	Alphabet2Morse(std::string);
	
	void setText(std::string);
	void getText(void);
	void translate2Morse(void);
	
	std::vector<std::string> getMorse(std::string);
	
};