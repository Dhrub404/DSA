#include<iostream>
#include<vector>
using namespace std;


//fib without efficiency
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

//fib with DP
long long dp_fib(int n, vector<long long> &dp){
    if(n <= 1){
        return n;
    }

    if(dp[n] == 0){
        dp[n] = dp_fib(n-1, dp) + dp_fib(n-2, dp);
    }

    return dp[n];
}

int main(){
    int n = 5;
    vector<long long> dp(n+1);

    // cout << dp(n);

    // // using Dp in fib using MEMOIZATION
    // cout << dp_fib(n, dp);

    // //DP FIB USING TABULATION
    // dp[0] = 0;
    // dp[1] = 1;
    // for(int i=2;i<=n;i++){
    //     dp[i] = dp[i-1] + dp[i-2];
    // }
    // cout << dp[n] << endl;

    //DP FIB USING TABULATION  --> S.C. O(N)
    // dp[0] = 0;
    // dp[1] = 1;
    // for(int i=2;i<=n;i++){
    //     dp[i] = dp[i-1] + dp[i-2];
    // }
    // cout << dp[n] << endl;

    //DP FIB USING TABULATION --> S.C. O(1)
    long long prev1 = 0;
    long long prev2 = 1, curr;
    for(int i=2;i<=n;i++){
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    cout << curr << endl;


}