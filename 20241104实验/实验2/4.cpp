#include <iostream>
int main()
{
	double a, b;
	char inputOperator;
	double result;
	bool hasError;
	while (1)
	{
		hasError = false;
		std::cin >> a >> inputOperator >> b;
		switch (inputOperator)
		{
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if (b == 0.0)
			{
				hasError = true;
				std::cout << "错误：除数为 0" << std::endl;
			}
			else
				result = a / b;
			break;
		case '%':
			if (a != (int)a || b != (int)b)
			{
				hasError = true;
				std::cout << "错误：取余运算不能是小数" << std::endl;
			}
			else
				result = (int)a % (int)b;
			break;
		default:
			hasError = true;
			std::cout << "错误：非法的运算符" << std::endl;
		}
		if (!hasError)
			std::cout << a << ' ' << inputOperator << ' ' << b << " = " << result << std::endl;
	}
	return 0;
}