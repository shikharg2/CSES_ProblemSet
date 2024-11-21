#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,x;
    cin >> n >> x;

    vector<int> weights(n);
    for(int i = 0 ; i < n ; i++){
        cin >> weights[i];
    }

    sort(weights.begin(),weights.end());

    int cnt = 0;
    int left = 0 , right = n-1;
    while(left <= right){
        if(weights[left]+weights[right] <= x){
            cnt++;
            left++;
            right--;
        }
        else{
            right--;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}