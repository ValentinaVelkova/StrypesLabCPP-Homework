#include <iostream>
#include <cmath>

int main() {
    double R, L, H;
    std::cout << "Enter the radius(R), cylinder height (L) and water height(H)" << std::endl;
    std::cin >> R >> L >> H;
    
    double area = acos((R - H) / R) * pow(R, 2) - (R - H) * sqrt(2 * R * H - pow(H, 2));
    double water_volume = area * L;

    std::cout << "The water volume is: " << water_volume << std::endl;

    return 0;
}