#include <iostream>
double a, b, c;
template<typename T> void swap(T& _x, T& _y)
{
	static T temp;
	temp = _x;
	_x = _y;
	_y = temp;
}
void sort() // 令 a,b,c 从小到大有序排列
{
	if (a > b)
		swap(a, b);
	if (b > c)
		swap(a, b);
	if (a > b)
		swap(a, b);
}
int main()
{
	std::cout << "【请输入三角形的三边长，用空格分隔】：";
	std::cin >> a >> b >> c;
	sort();
	if (a + b < c)
		std::cout << "这三条边不能组成一个三角形" << std::endl;
	else
	{
		std::cout << "该三角形的周长为：" << a + b + c << std::endl;
		if (a == b || b == c)
			std::cout << "该三角形是等腰三角形" << std::endl;
		else std::cout << "该三角形不是等腰三角形" << std::endl;
	}
	return 0;
}