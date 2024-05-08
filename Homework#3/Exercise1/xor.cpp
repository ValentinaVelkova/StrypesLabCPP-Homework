#include <iostream>

int main() {

    int a, b;

    std::cin >> a >> b;

    if ((a || b) && (!a || !b)) {
        std::cout << true << std::endl;
    } else {
        std::cout << false << std::endl;
    }

    return 0;
}