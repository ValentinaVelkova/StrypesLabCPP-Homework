#include <iostream>
#include <string>
#include <deque>

int main(int argc, char **argv) {

    std::string line;
    int n = 10;

    if (argc > 1) {

        for (int i = 1; i < argc; i++) {

            if(std::string(argv[i]) == "-n" && i + 1 < argc) {

                n = std::stoi(argv[i + 1]);
                break;
            }
        }
    }

    std::deque<std::string> lines;

    while(std::getline(std::cin, line)) {

        lines.push_back(line);

        if (lines.size() > n) {
            
            lines.pop_front();
        }
    }

    for (const auto& l : lines) {

        std::cout << l << std::endl;
    }

    return 0;
}