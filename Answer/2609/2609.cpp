#include <iostream>

void CmulCdiv(int a, int b)
{
	//�ִ����� ���ϱ�
// ���߿� ���������� ���� ++�ϸ鼭
// ū�� ���ϱ�

	int div = 0; //�ִ� �����
	int mul = 0; //�ּ� �����
	int i = 1; //�ּ� ����� ���Ҷ� ū���� ���ϴ� ��
	//b�� �������� ���
	if (a > b)
	{
		for (int i = 1; i <= b; i++)
		{
			//�ּҰ��� ���α��� �ݺ� �μ��� ��� ������ �ִ� �����
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
	//a�� �������� ���
	else if (b > a)
	{
		for (int i = 1; i <= a; i++)
		{
			//�ּҰ��� ���α��� �ݺ� �μ��� ��� ������ �ִ� �����
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