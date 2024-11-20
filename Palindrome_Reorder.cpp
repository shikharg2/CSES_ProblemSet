#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.length();
    unordered_map<char,int> mpp;

    for(char c : str){
        mpp[c]++;
    }
    
    int cnt = 0;
    for(auto it : mpp){
        if(it.second%2==1){
            cnt++;
        }
    }
    if(cnt > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    string ans(n,' ');
    int left = 0 , right = n-1;
    for(auto it : mpp){
        if(it.second%2==1){
            ans[n/2] = it.first;
            it.second--;
        }
        while(it.second > 0){
            ans[left++] = it.first;
            ans[right--] = it.first;
            it.second -= 2;
        }
    }
    cout << ans;


    return 0;
}