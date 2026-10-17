#include <iostream>
#include <cmath>

int CalculateAreaOfCircle(float radius) {
	const float PI = 3.14;
	return ceil(PI * pow(radius, 2));
}

int main()
{
	float radius;
	std::cout << "Enter the radius of the circle ?" << std::endl;
	std::cin >> radius;
	std::cout << "Area of the circle is: " << CalculateAreaOfCircle(radius) << std::endl;

	return 0;
}
