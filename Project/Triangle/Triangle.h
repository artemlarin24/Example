#pragma once


class Triangle {
    double _side;
    double _height;

public:
    Triangle(double side, double height);

    double calculate_S() const;

    void set_side(double side);
    void set_height(double height);

    double get_side() const;
    double get_height() const;
};