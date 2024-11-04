#include <iostream>
int gcd(int x, int y)
{
	if (x % y == 0)
		return y;
	else return gcd(y, x % y);
}
int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}
int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << "它们的最大公因数为：" << gcd(a, b) << std::endl;
	std::cout << "它们的最小公倍数为：" << lcm(a, b);
	return 0;
}