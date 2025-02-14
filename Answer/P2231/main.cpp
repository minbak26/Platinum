#include<iostream>

int main()
{
	int answer = 0;
	int arr[100]{};
	int sum = 0;
	int result = 1000000;
	std::cin >> answer;
	
	for (int i = 0; i < answer; i++)
	{
		sum = 0;
		int j = 0;
		int div = 10;
		while(true)
		{
			
			if (arr[j] < 10)
			{
				arr[j] = i % div;
				sum += arr[j];
				break;
			}
			else
			{
				arr[j] = i / div;
			}
			div *= 10;
		}

		if (sum + i == answer)
		{
			answer = sum + i;
			if (result < answer)
			{
				result = answer;
			}

		}
		else
			result = 0;
	}
	
	std::cout << result << "\n";
	return 0;
}