#include "Triangle.h"

Triangle::Triangle(double side, double height) {
    _side = side;
    _height = height;
}

double Triangle::calculate_S() const {
    return 0.5 * _side * _height;
}

void Triangle::set_side(double side) {
    _side = side;
}

void Triangle::set_height(double height) {
    _height = height;
}

double Triangle::get_side() const {
    return _side;
}

double Triangle::get_height() const {
    return _height;
}