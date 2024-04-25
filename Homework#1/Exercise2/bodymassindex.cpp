#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    float mass, height, bmi, bmi_new;
    std::cout << "Enter your Weight(kg) and Height(cm)" << std::endl;
    std::cin >> mass >> height;

    bmi = mass / (std::pow(height, 2));
    bmi_new = 1.3 * bmi;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your BMI is " << bmi << std::endl; 
    std::cout << "Your BMI based on the new formula is " << bmi_new << std::endl; 

    return 0;
}