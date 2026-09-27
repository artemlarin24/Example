#include "Triangle.h"
#include <cmath>
#include <stdexcept>

Triangle::Triangle(double side, double height) {
    set_side(side);
    set_height(height);
}

double Triangle::calculate_area() const {
    return 0.5 * _side * _height;
}

void Triangle::validate(double value, const std::string& name) const {
    if (!std::isfinite(value) || value <= 0.0) {
        throw std::invalid_argument(
            name + " должна быть положительным конечным числом"
        );
    }
}

void Triangle::set_side(double side) {
    validate(side, "Сторона треугольника");
    _side = side;
}

void Triangle::set_height(double height) {
    validate(height, "Высота треугольника");
    _height = height;
}

double Triangle::get_side() const noexcept {
    return _side;
}

double Triangle::get_height() const noexcept {
    return _height;
}