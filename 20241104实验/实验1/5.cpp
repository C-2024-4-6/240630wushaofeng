#include <iostream>
#include <iomanip>
int main()
{
	double fahrenheitTemprature;
	double celsiusTemprature;
	std::cout << "请输入华氏温度：";
	std::cin >> fahrenheitTemprature;
	celsiusTemprature = (fahrenheitTemprature - 32.0) / 1.8;
	std::cout << "对应的摄氏温度为：" << std::fixed << std::setprecision(2) << celsiusTemprature;
	return 0;
}