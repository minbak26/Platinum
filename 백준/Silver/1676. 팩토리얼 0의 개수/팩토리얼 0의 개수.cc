#include<iostream>

int countZero(int N)
{
    int count = 0;
    for (int i = 5; N / i >= 1; i *= 5)
    {
        count += N / i;
    }
    return count;
}

int main()
{
    int a;
    std::cin >> a;
    std::cout << countZero(a);
    return 0;
}

// 팩토리얼이 아닌 소인수 10의 개수를 구하면됨
// 10의 개수를 구하는 방법중 2,5의 소인수의 개수(5선택)로 구한다.