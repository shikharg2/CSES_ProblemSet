#include<bits/stdc++.h>

using namespace std;

int main(){

    int n , m , k;
    cin >> n >> m >> k;
    priority_queue<int , vector<int> , greater<int>> required;

    for(int i = 0 ; i < n ; i++){
        int temp;
        cin >> temp;
        required.push(temp);
    }

    priority_queue<int , vector<int> , greater<int>> available;
    for(int i = 0 ; i < m ; i++){
        int temp;
        cin >> temp;
        available.push(temp);
    }

    int cnt = 0;

    while(!required.empty() && !available.empty()){
        int avail = available.top();
        int req = required.top();

        if(avail < req-k){
            available.pop();
        }
        else if(avail > req+k){
            required.pop();
        }
        else{
            cnt++;
            required.pop();
            available.pop();
        }
    }

    cout << cnt;
    

    return 0;
}   