#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sn = (n * (n+1))/2;
    for(int i = 0 ; i < n-1 ; i++){
        int num;
        cin >> num;
        sn -= num;
    }
    

    cout << sn;
    return 0;
}