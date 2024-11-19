#include<bits/stdc++.h>

using namespace std;

long long solve(long long n){
    if(n==0){
        return 0;
    }
    return n/5 + solve(n/5);
}

int main(){

    long long n;
    cin >> n;

    int zeros = solve(n);

    cout << zeros;

    return 0;
}