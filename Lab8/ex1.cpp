#include <iostream>
#include <sstream>
#include <vector>

int main() {
	std::string input;

	std::cout << "Input string: ";
	std::getline(std::cin, input);

	for (int i = 0; i < input.length(); ++i) {
		if (input[i] == ',' || input[i] == '.' || input[i] == '\t') {
			input[i] = ' ';
		}
	}

	std::stringstream ss(input);
	std::string word;
	std::vector<std::string> words;
	std::string longestWord = "";

	while (ss >> word) {
		if (word.length() > 1) {
			words.push_back(word);
			if (word.length() > longestWord.length()) {
				longestWord = word;
			}
		}
	}

	std::cout << "Words count: " << words.size() << std::endl;
	std::cout << "Longest word: " << longestWord << " (" << longestWord.length() << " symbols)" << std::endl;

	return 0;
}