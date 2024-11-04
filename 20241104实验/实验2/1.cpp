#include<iostream>

int main()
{
	char inputChar;
	std::cin >> inputChar;
	if (inputChar >= 'a' && inputChar <= 'z')
		std::cout << (char)(inputChar - 'a' + 'A');
	else if (inputChar != 255)
		std::cout << (int)inputChar + 1;
	else	//inputChar == 255
		std::cout << "后继字符不是合法的 ASCII 字符";
	return 0;
}
