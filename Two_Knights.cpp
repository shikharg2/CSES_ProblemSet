#include<bits/stdc++.h>

using namespace std;




void solve(int k){
    long long total = pow(k,2)*(pow(k,2)-1)/2;
    long long attackers = 4 * (k-1) * (k-2);
    cout << total - attackers << endl;
}

int main(){

    int n;
    cin >> n;
    for(int k = 1 ; k <= n ; k++){
        solve(k);
    }
    return 0;
}