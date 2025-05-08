#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int dp[1000001]; 

int XtoOne_DP(int X) {
    dp[1] = 0; 
    
    for (int i = 2; i <= X; i++) {
        dp[i] = dp[i-1] + 1; 
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i/2] + 1); 
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i/3] + 1); 
    }
    
    return dp[X];
}

int main() {
    int X = 0;
    cin >> X;
    
    // DP 테이블 초기화
    for (int i = 0; i <= X; i++) {
        dp[i] = INT_MAX;
    }
    
    int result = XtoOne_DP(X);
    cout << result << "\n";
    
    return 0;
}