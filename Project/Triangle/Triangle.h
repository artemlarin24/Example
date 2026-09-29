#pragma once
#include <string>

class Triangle {
    double _side;
    double _height;
    static void validate(double value, const std::string& name);
public:
    Triangle(double side, double height);

    double calculate_area() const;

    void set_side(double side);
    void set_height(double height);

    double get_side() const noexcept;
    double get_height() const noexcept;
};