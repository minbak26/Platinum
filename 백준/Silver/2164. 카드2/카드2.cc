#include<iostream>
#include <queue>

int CardTwo(int inputNum)
{
	std::queue<int> result;
	for (int i = 0; i < inputNum; i++)
	{
		result.push(i+1);
	}
	int j = 0;
	while (result.size() != 1)
	{
		if (j % 2 == 0)
		{
			result.pop();
		}
		else if (j % 2 != 0)
		{
			result.push(result.front());
			result.pop();
		}
		j++;
	}
	return result.front();
}

int main()
{
	int inputNum =0;
	std::cin >> inputNum;
	std::cout << CardTwo(inputNum) << "\n";
	return 0;
}