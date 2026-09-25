#include <iostream>
#include <stdexcept>
#include "Triangle.h"

int main() {
    std::cout << "Input side and height: " << std::endl;

    double side, height;
    if (!(std::cin >> side >> height)) {
        std::cerr << "Error: enter two numbers" << std::endl;
        return 1;
    }

    try {
        Triangle T(side, height);
        double S = T.calculate_S();
        std::cout << S << std::endl;
    }
    catch (const std::invalid_argument& error) {
        std::cerr << "Error: " << error.what() << std::endl;
        return 1;
    }

    return 0;
}