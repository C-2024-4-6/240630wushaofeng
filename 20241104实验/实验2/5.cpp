#include <cstdio>
#include <iostream>
int main()
{
	int letters = 0;
	int spaces = 0;
	int digits = 0;
	int others = 0;
	char ch;
	do
	{
		ch = getchar();
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			letters++;
		else if (ch == ' ')
			spaces++;
		else if (ch >= '1' && ch <= '9')
			digits++;
		else if (ch != '\n')
			others++;
	} while (ch != '\n');
	std::cout << "字母的个数：" << letters << std::endl;
	std::cout << "空格的个数：" << spaces << std::endl;
	std::cout << "数字的个数：" << digits << std::endl;
	std::cout << "其它字符的个数：" << others << std::endl;
	return 0;
}