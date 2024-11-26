#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;



int main(){

    int n , amount;
    cin >> n >> amount;
    vector<long long> coins(n);
    vector<long long> dp(amount+1,0);
    for(int i = 0 ; i < n ; i++){
        cin >> coins[i];
    }

    dp[0] = 1;
    for (int i = 1; i <= amount; i++) { // har ek amount ke liye
        for (int j = 0; j < n; j++) {   // har ek coin try karo
            if(coins[j] <= i){          // agar coin ka value curr amount se chota hai
                dp[i] = (dp[i] + dp[i-coins[j]]) % mod;
                // Abhi jitna sum hai + yeh coin minus krke jitna sum hota+ye coin
            }
        }
    }

    cout << dp[amount];

    return 0;
}