#include <iostream>

int Ehang(int n, int k)
{
    if (k == 0 || k == n)
        return 1;

    return Ehang(n - 1, k - 1) + Ehang(n - 1, k);
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::cout << Ehang(n, k) << "\n";
}