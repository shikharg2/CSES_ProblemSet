#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;

int solve(int n,vector<int>& dp){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }
    long long  ans = 0;
    for(int i = 1 ; i <= 6 ; i++){
        ans = (ans +solve(n-i,dp)) % mod;
    }
    return dp[n] = ans;
}

int main(){

    int n;
    cin >> n;
    
    vector<int> dp(n+1,-1);

    int ans = solve(n,dp);
    cout << ans;

    return 0;
}