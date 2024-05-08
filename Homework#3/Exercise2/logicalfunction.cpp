#include <iostream>

bool syntesizingByOne(int a, int b, int c) {

    if ((!a && !b && !c) || (!a && b && !c) || (!a && b && c) || (a && b && c)) {
        return true;
    } else {
        return false;
    }
}

bool syntesizingByZero(int a, int b, int c) {

    if ((a || b || !c) && (!a || b || c) && (!a || b || !c) && (!a || !b || c)) {
        return true;
    } else {
        return false;
    }
}

bool minimized(int a, int b, int c) {

    if ((!a && !c) || (b && c)) {
        return true;
    } else {
        return false;
    }
}

int main() {

    int a, b, c;
    std::cout << "Enter values for a, b, c (0 or 1):";
    std::cin >> a >> b >> c;

    std::cout << "Result from syntesizing by 1: " << syntesizingByOne(a, b, c) << std::endl;
    std::cout << "Result from syntesizing by 0: " << syntesizingByZero(a, b, c) << std::endl;
    std::cout << "Result from minimized expression: " << minimized(a, b, c) << std::endl;

    return 0;
}