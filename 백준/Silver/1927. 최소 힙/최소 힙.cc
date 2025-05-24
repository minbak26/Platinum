#include<queue> // 우선순위 큐를 이용해서 최소 힙 구하기.
#include<iostream>

using namespace std;

// 최소힙 선언.
priority_queue<int, vector<int>, greater<int>> minHeap;


int main()
{
    // 시간초과로 인한 코드 추가.
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	// 연산 개수.
	int acount;
	
	cin >> acount;

	for (int i = 0; i < acount; i++)
	{
		int input;
		cin >> input;
		// 입력값이 0 이면.
		if (input == 0)
		{
			// 배열이 비어있으면, 0 출력.
			if(minHeap.empty())
			{
				cout << 0 << "\n";
			}
			// 배열의 가장 작은값 출력하고 제거.
			else
			{
				cout << minHeap.top() << "\n";
				minHeap.pop();
			}

		}
	
		// 예외처리후
		// 일반 입력 값 입력.
		else
		{
			minHeap.push(input);
		}
			
	}

	return  0;
}