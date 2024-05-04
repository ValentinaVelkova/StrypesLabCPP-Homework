// This program is used to test the mywc.cpp program

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstring>


int main(int argc, char **argv) {

    std::vector<int> numbers;
    int num;

    while(std::cin >> num) {
        numbers.push_back(num);
    }

    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    int average = static_cast<double>(std::accumulate(numbers.begin(), numbers.end(), 0) / numbers.size());
    
    if(1 == argc) {
        std::cout << "Smallest number: " << min << std::endl;
        std::cout << "Biggest number: " << max << std::endl;
        std::cout << "Average: " << average << std::endl;
    } else if(2 == argc) {

        if(strcmp(argv[1], "-m") == 0) {

            std::cout << "Smallest number: " << min << std::endl;

        } else if (strcmp(argv[1], "-M") == 0) {

            std::cout << "Biggest number: " << max << std::endl;

        } else if (strcmp(argv[1], "-a") == 0) {

            std::cout << "Average: " << average << std::endl;

        } else {

            std::cerr << "Unkown argument!" << std::endl;

        }
    } else {

        std::cerr << "Too many arguments!" << std::endl;

    }

    return 0;
}