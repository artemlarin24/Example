#include "Triangle.h"
#include <cmath>
#include <stdexcept>

Triangle::Triangle(double side, double height) {
    set_side(side);
    set_height(height);
}

double Triangle::calculate_S() const {
    return 0.5 * _side * _height;
}

void Triangle::set_side(double side) {
    if (!std::isfinite(side) || side <= 0) {
        throw std::invalid_argument("Сторона треугольника должна быть положительным конечным числом");
    }
    _side = side;
}

void Triangle::set_height(double height) {
    if (!std::isfinite(height) || height <= 0) {
        throw std::invalid_argument("Высота треугольника должна быть положительным конечным числом");
    }
    _height = height;
}

double Triangle::get_side() const {
    return _side;
}

double Triangle::get_height() const {
    return _height;
}