#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr;
    int N = 0, K = 0;
    int coinCount = 0;

    std::cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }

    int index = arr.size() - 1;

    while (K > 0 && index >= 0)
    {
        if (K >= arr[index])
        {
            K -= arr[index];
            coinCount++;
        }
        else
        {
            index--;
        }
    }

    std::cout << coinCount << "\n";
    return 0;
}
