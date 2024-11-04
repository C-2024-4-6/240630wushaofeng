#include <iostream>
#include <iomanip>
int main()
{
	double x;
	std::cout << "输入 x 以计算出对应的 y, 要退出程序请输入负数。" << std::endl;
	while (1)
	{
		std::cin >> x;
		if (x < 0)
			break;
		else if (0.0 < x && x < 1.0)
			std::cout << 3.0 - 2.0 * x << std::endl;
		else if (1.0 <= x && x < 5.0)
			std::cout << 2.0 / (4.0 * x) + 1 << std::endl;
		else if (5.0 <= x && x < 10.0)
			std::cout << x * x << std::endl;
		else
			std::cout << "输入不在函数定义域内, 请重新输入" << std::endl;
	}
	return 0;
}