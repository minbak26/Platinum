#include<iostream>

int dpArray[100001];

int OneTwoThreeSum(int n)
{
	dpArray[0] = 1;
	dpArray[1] = 2;
	dpArray[2] = 4;
	if (n >= 3)
	{
		for (int i = 3; i <= n; i++)
		{
			dpArray[i] = dpArray[i - 1] + dpArray[i - 2] + dpArray[i-3];
		}
	}
	
	
	return dpArray[n-1];
}

int main()
{
	int x = 0, input = 0;
	std::cin >> x;

	
	for (int i = 0; i < x; i++)
	{
		std::cin >> input;
		std::cout << OneTwoThreeSum(input) << "\n";
	}
	
	
	return 0;
}