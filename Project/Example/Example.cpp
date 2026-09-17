#include <iostream>

class Triangle {
	double _side;
	double _height;
public:
	Triangle(double side, double height) {
		_side = side;
		_height = height;
	}
	double calculate_S() const {
		return 0.5 * _side * _height;
	}
	void set_side(double side) {
		_side = side;
	}
	void set_height(double height) {
		_height = height;
	}
	double get_side() const {
		return _side;
	}
	double get_height() const {
		return _height;
	}
};

int main() {
	std::cout << "Input side and height of triangle:  " << std::endl;
	double side, height;
	std::cin >> side;
	std::cin >> height;
	Triangle T(side, height);
	double S = T.calculate_S();
	std::cout << S;
	return 0;
}