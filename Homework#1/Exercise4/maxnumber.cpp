#include <iostream>

int main() {
    double num1,num2, num3;
    std::cin >> num1 >> num2 >> num3;
    double max;

    if (num1 > num2 && num1 > num3) {
        max = num1;
    } else if (num2 > num1 && num2 > num3) {
        max = num2;
    } else {
        max = num3;
    }

    std::cout << "The max number is: " << max << std::endl;
    
    return 0;
}


   
    