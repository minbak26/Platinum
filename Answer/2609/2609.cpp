#include <iostream>

void CmulCdiv(int a, int b)
{
	//최대공약수 구하기
// 둘중에 작은수까지 숫자 ++하면서
// 큰수 구하기

	int div = 0; //최대 공약수
	int mul = 0; //최소 공배수
	int i = 1; //최소 공배수 구할때 큰값에 곱하는 수
	//b가 작은수인 경우
	if (a > b)
	{
		for (int i = 1; i <= b; i++)
		{
			//최소값의 본인까지 반복 두수를 모두 나누면 최대 공약수
			if (a % i == 0 && b % i == 0)
			{
				if (div < i)
				{
					div = i;

				}
			}
		}
		

		mul = div * (a / div) * (b / div);

		std::cout << div << " " << mul <<"\n";
	}
	//a가 작은수일 경우
	else if (b > a)
	{
		for (int i = 1; i <= a; i++)
		{
			//최소값의 본인까지 반복 두수를 모두 나누면 최대 공약수
			if (a % i == 0 && b % i == 0)
			{
				if (div < i)
				{
					div = i;

				}
			}
		}


		mul = div * (a / div) * (b / div);

		std::cout << div << " " << mul << "\n";

	}

	else if (a == b)
	{
		std::cout << a << " " << b << "\n";
	}
}

int main()
{
	int a=0, b=0;
	std::cin >> a >> b;
	CmulCdiv(a,b);
	return 0;
}