#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll a, ll b){
if((2*a - b)%3 || (2*a-b) < 0 || (2*b-a)%3 || (2*b-a)<0){
    cout << "NO" <<endl;
    return;
}
cout << "YES" << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        solve(a,b);
    }

    return 0;
}