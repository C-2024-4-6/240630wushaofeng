#include <iostream>
#include <iomanip>
constexpr double PI = 3.14159265;
int main()
{
	double h, r;
	std::cout << "请输入圆锥的底面半径：";
	std::cin >> r;
	std::cout << "请输入圆锥的高：";
	std::cin >> h;
	double result = (1.0 / 3.0) * PI * r * r * h;
	std::cout << "该圆锥的体积为：" << std::fixed << std::setprecision(3) << result;
	return 0;
}
