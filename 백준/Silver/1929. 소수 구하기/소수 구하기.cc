#include <iostream>
#include <vector>
#include <cmath>

void PrintPrimesInRange(int a, int b)
{
    std::vector<bool> result(b + 1, true);
    result[0] = result[1] = false;

    int sqrt_b = static_cast<int>(std::sqrt(b));
    for (int i = 2; i <= sqrt_b; ++i)
    {
        if (result[i]) {
            for (int j = i * i; j <= b; j += i)
            {
                result[j] = false;
            }
        }
    }

    for (int i = a; i <= b; ++i)
    {
        if (result[i])
        {
            std::cout << i << "\n";
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a = 0, b = 0;
    std::cin >> a >> b;
    PrintPrimesInRange(a, b);
    return 0;
}