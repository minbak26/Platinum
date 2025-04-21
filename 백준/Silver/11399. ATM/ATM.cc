#include<iostream>
#include <vector>
#include <algorithm>


int main()
{
	int count = 0, number = 0, sum = 0;
	std::vector<int> result;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::cin >> number;
		result.push_back(number);
	}
	sort(result.begin(), result.end());

	for (int i = 0; i < count; i++)
	{
		sum += (count - i) * result[i];
	}

	std::cout << sum;

}