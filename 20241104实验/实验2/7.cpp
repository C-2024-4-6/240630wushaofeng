#include <iostream>
int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
			std::cout << '*';
		std::cout << std::endl;
	}
	return 0;
}