#include<bits/stdc++.h>

using namespace std;

void solve(long long n, long long s){
    long long target = s/2;
    long long sum = 0;
    vector<int> set1;
    vector<int> set2;

    for(int i = n ; i >= 1 ; i--){
        if(sum+i <= target){
            sum = sum + i;
            set1.push_back(i);
        }
        else{
            set2.push_back(i);
        }
    }
    cout << set1.size() << endl;
    for(auto it : set1){
        cout << it << " ";
    }
    cout << endl << set2.size() << endl;
    for(auto it : set2){
        cout << it << " ";
    }
    return;
}

int main(){
    long long n;
    cin >> n;

    long long sum = (n*(n+1))/2;
    if(sum%2 == 0){
        cout << "YES" << endl;
        solve(n,sum);
    }
    else {
        cout << "NO";
    }

    return 0;
}