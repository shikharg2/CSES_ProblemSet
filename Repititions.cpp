#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin >> str;

    int cnt = 0;
    int max_cnt = 0;
    char curr = str[0];
    int n = str.length();

    for(int i = 0 ; i < n ; i++){
        if(str[i] == curr){
            cnt++;
            max_cnt = max(max_cnt,cnt);
        }
        else{
            curr = str[i];
            cnt = 1;
        }
    }

    cout << max_cnt;

    return 0;
}