#include<bits/stdc++.h>

using namespace std;

int main(){

    int amount,n;
    cin >> n >> amount;

    vector<int> coins(n);

    for(int i = 0 ; i < n ; i++){
        cin >> coins[i];
    }

    vector<int> dp(amount + 1, 1e9);
        dp[0] = 0;

        for (int i = 1; i <= amount; ++i) {
            for (int coin : coins) {
                if (i >= coin) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        int ans = dp[amount] == 1e9 ? -1 : dp[amount];
        cout << ans;

    return 0;
}