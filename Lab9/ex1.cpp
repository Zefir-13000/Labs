#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

static std::vector<std::string> split_sentence(std::string text) {

    std::stringstream ss(text);
    std::string word;
    std::vector<std::string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}

int main() {
    std::ifstream read_words("words.txt");
    std::ofstream write_words("words_short.txt");

    int words_count = 0;

	std::string line;
	while (std::getline(read_words, line)) {
        std::vector<std::string> words = split_sentence(line);

        uint32_t shortest_word_len = UINT_MAX, shortests_word_index = 0;
        for (int i = 0; i < words.size(); ++i) {
            size_t word_len = words[i].length();
            if (word_len < shortest_word_len) {
                shortests_word_index = i;
                shortest_word_len = word_len;
            }
        }

        std::string result = words[shortests_word_index] + "\n";
        write_words.write(result.c_str(), result.size());
        ++words_count;
	}

    std::string words_count_str = std::to_string(words_count);
    write_words.write(words_count_str.c_str(), words_count_str.size());

    read_words.close();
    write_words.close();

	return 0;
}