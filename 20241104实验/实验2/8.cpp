#include <iostream>
#include <cmath>
int main()
{
	double a;
	double x, nextX;
	std::cout << "请输入一个非负实数：";
	std::cin >> a;
	while (a < 0.0)
	{
		std::cout << "非法输入，请重新输入：";
		std::cin >> a;
	}
	nextX = a;
	
	do
	{
		x = nextX;
		nextX = 0.5 * (x + a / x);
	} while (fabs(nextX - x) >= 1e-5);
	std::cout << "该数的平方根为: ±" << nextX;
	return 0;
}