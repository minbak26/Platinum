#include <iostream>


int BlackJack()
{
	//M�� ������ �ϴ°��� ��ǥ
	int selectThree; //������ ���� ī���� ����
	int result = 0; //M-sum�� ���ϱ����� ����
	int sum = 0;// �迭��
	int dealer = 0; //������ ��ģ ��
	std::cin >> selectThree;
	std::cin >> dealer;
	

	//ī�尳�� ��ŭ �����迭 �Ҵ�
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
				sum = 0;//�ݺ��Ҷ����� �ʱ�ȭ
				sum += (array[i] + array[j] + array[k]);
				if (sum > dealer)
					continue; // ���������� ������ ������ϰ� ��Ƽ��
				if (i == 0 && j == 1 && k == 2)
				{
					if (sum > dealer)
						continue;
					else
						result = sum; //ù��° ����� ���� �ϴ� �־����
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