#include <iostream>
#include <cmath>
int main()
{
	const float PI = 3.14;
	float radius;
	std::cout << "Enter the radius of the circle ?" << std::endl;
	std::cin >> radius;
	float Area = ceil(PI * pow(radius, 2));
	std::cout << "Area of the circle is: " << Area << std::endl;

	return 0;
}
