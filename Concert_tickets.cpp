#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    multiset<int> tickets;
    for(int i = 0 ; i < n ; i++){
        int h;
        cin >> h;
        tickets.insert(h);
    }
    vector<int> customer(m);
    for(int i = 0 ; i < m ; i++){
        cin >> customer[i];
    }

    for(int i = 0 ; i < m ; i++){
        auto it = tickets.upper_bound(customer[i]);

        if(it == tickets.begin()){
            cout << -1 << endl;
        }
        else{
            cout << *(--it) << endl;
            tickets.erase(it);
        }
    }
    
    return 0;
}