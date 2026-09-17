#include <iostream>
#include "Triangle.h"

int main() {
    std::cout << "Input side and height: " << std::endl;
    double side, height;
    std::cin >> side;
    std::cin >> height;
    Triangle T(side, height);
    double S = T.calculate_S();
    std::cout << S;
    return 0;
}