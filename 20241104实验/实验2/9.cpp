#include <iostream>
int main()
{
	int day = 0;
	int appleNumber = 2;
	int totalApples = 0;
	double totalCost = 0.0;
	while (totalApples + appleNumber <= 100)
	{
		day++;
		totalApples += appleNumber;
		totalCost += 0.8 * appleNumber;
		appleNumber *= 2;
	}
	std::cout << "每天平均花费 " << totalCost / day << " 元";
	return 0;
}