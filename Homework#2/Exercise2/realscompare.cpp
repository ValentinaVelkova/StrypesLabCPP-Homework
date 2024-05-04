#include <iostream>
#include <iomanip>
#include <cmath>
#include <bitset>

#define EPS 0.01

bool absoluteEpsilon(double num1, double num2, double epsilon) {
    return std::fabs(num1 - num2) < epsilon;
}

bool relativeEpsilon(double num1, double num2, double epsilon) {
    return std::fabs(num1 - num2) < epsilon * std::fmax(num1, num2);
}

int main() {

    int tests = 10;

    float float_A = 1.0f;
    float float_B = 0.5f;

    double double_A = 1.0;
    double double_B = 0.0;
    
    int correct_float_count = 0;
    int incorrect_float_count = 0;
    int correct_double_count = 0;
    int incorrect_double_count = 0;

    for (int i = 0; i < tests; i++) {
        float_B += 0.1f;
        double_B += 0.1;
        
    }

    if(absoluteEpsilon(float_A, float_B, EPS)){
        correct_float_count++;
    } else {
        incorrect_float_count++;
    }

    if (relativeEpsilon(float_A, float_B, EPS)) {
        correct_float_count++;
    } else {
        incorrect_float_count++;
    }

    if(absoluteEpsilon(double_A, double_B, EPS)){
        correct_double_count++;
    } else {
        incorrect_double_count++;
    }

    if (relativeEpsilon(double_A, double_B, EPS)) {
        correct_double_count++;
    } else {
        incorrect_double_count++;
    }

    std::cout << "Float Comparisons:" << std::endl;
    std::cout << "First Number = " << float_A << ", Second Number = " << float_B << std::endl;
    std::cout << "Correct = " << correct_float_count << " Incorrect = " << incorrect_float_count << std::endl;
   
    std::cout << "Double comparisons:" << std::endl;
    std::cout << "First Number = " << double_A << ", Second Number = " << double_B << std::endl;
    std::cout << "Correct = " << correct_double_count << " Incorrect = " << incorrect_double_count << std::endl;   
    
    return 0;
}