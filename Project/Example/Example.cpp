#include <iostream>
int main() {
	double a, h, S;
	std::cout << "Input side and height" << std::endl;
	std::cin >> a >> h;
	S = 0.5 * a * h;
	std::cout << "Area: " << S << std::endl;
	return 0;
}
