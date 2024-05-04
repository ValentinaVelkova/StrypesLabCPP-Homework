#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

int main(int argc, char **argv) {

    bool lines = true;
    bool words = true;
    bool chars = true;

    for (int i = 1; i < argc; i++) {

        if (strcmp(argv[i], "-l") == 0) {
            words = false;
            chars = false;
        } else if (strcmp(argv[i], "-w") == 0) {
            lines = false;
            chars = false;
        } else if (strcmp(argv[i], "-c") == 0) {
            lines = false;
            words = false;
        }
    }

    std::string line;

    int line_count = 0;
    int word_count = 0;
    int char_count = 0;

    while(std::getline(std::cin, line)) {

        if(lines) {
            ++line_count;
        }

        if (words) {
            std::istringstream iss(line);
            std::string word;
            while (iss >> word) {
                ++word_count;
            }
        }

        if (chars) {
            char_count += line.length() + 1;
        }
    }

    if (lines) {
        std::cout << line_count << " ";
    }

    if (words) {
        std::cout << word_count << " ";
    }

    if (chars) {
        std::cout << char_count << " ";
    }

    return 0;
}