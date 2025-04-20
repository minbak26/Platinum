#include <iostream>
#include <stdio.h> // 빠른 입출력

using namespace std;

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count[10001] = {0}; // 숫자 범위: 1~10,000

    int n;
    scanf("%d", &n);

    // 숫자 카운팅
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }

    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << i << "\n";
        }
    }

    return 0;
}