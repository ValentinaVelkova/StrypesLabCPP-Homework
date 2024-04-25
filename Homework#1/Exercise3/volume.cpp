#include <iostream>
#include <cmath>

int main() {
    double R, H;
    std::cout << "Enter the radius(R) and water height(H)" << std::endl;
    std::cin >> R >> H;
    
    double water_volume = M_PI * (std::pow(R, 2)) * H;

    std::cout << "The water volume is: " << water_volume << std::endl;
    
    return 0;
}