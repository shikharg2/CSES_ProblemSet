#include<bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;
int main(){
    long long n;
    cin >> n;

    long long ans = 1;
    for(int i = 0 ; i < n ; i++){
        ans = (ans << 1)%mod;
    }
    cout << ans;
    

    return 0;
}