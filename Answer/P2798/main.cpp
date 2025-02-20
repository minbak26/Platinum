#include <iostream>


int BlackJack()
{
	//M에 가깝게 하는것이 목표
	int selectThree; //딜러가 정한 카드의 개수
	int result = 0; //M-sum값 비교하기위한 변수
	int sum = 0;// 배열합
	int dealer = 0; //딜러가 외친 값
	std::cin >> selectThree;
	std::cin >> dealer;
	

	//카드개수 만큼 동적배열 할당
	int* array = new int[selectThree];

	for (int i =0; i < selectThree; i++)
	{
		std::cout << "array[" << i << "] = ";
		std::cin >> array[i];
	}

	for (int i = 0; i < selectThree; i++)
	{
		for (int j = i+1; j < selectThree; j++)
		{
			for (int k = j+1; k< selectThree; k++)
			{
				sum = 0;//반복할때마다 초기화
				sum += (array[i] + array[j] + array[k]);
				if (sum > dealer)
					continue; // 딜러값보다 높으면 저장안하고 컨티뉴
				if (i == 0 && j == 1 && k == 2)
				{
					if (sum > dealer)
						continue;
					else
						result = sum; //첫번째 경우의 수는 일단 넣어놓기
				}
				else
				{
					if (result < sum)
					{
						result = sum;
					}
				}


			}
		}


	}

	return result;

}


int main()
{
	
	std::cout << BlackJack() << "\n";


}