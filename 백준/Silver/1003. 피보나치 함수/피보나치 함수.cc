#include<iostream>
using namespace std;

pair<int, int> fibCount[41]; // 0호출 횟수, 1호출 횟수

void precompute() {
    fibCount[0] = { 1, 0 };
    fibCount[1] = { 0, 1 };

    for (int i = 2; i <= 40; i++) {
        fibCount[i].first = fibCount[i - 1].first + fibCount[i - 2].first;
        fibCount[i].second = fibCount[i - 1].second + fibCount[i - 2].second;
    }
}

int main() {
    precompute();

    int count, n;
    cin >> count;

    for(int i=0; i<count; i++)
    {
        cin >> n;
        cout << fibCount[n].first << " " << fibCount[n].second << "\n";
    }

    return 0;
}