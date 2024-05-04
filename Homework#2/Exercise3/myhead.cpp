#include <iostream>
#include <string>

int main(int argc, char **argv) {

    std::string line;
    int n = 10;

    if(argc > 1) {

        for (int i = 1; i < argc; i++) {

            if(std::string(argv[i]) == "-n" && i + 1 < argc) {

                n = std::stoi(argv[i + 1]);
                break;
            }
        }
    }

    int line_count = 0;

    while(std::getline(std::cin, line) && line_count < n) {

        std::cout << line << std::endl;
        ++line_count;
    }

    return 0;
}