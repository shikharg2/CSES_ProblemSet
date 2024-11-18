#include<bits/stdc++.h>

using namespace std;

void solve(long long row , long long col){

    if(row > col){
        long long area = (row-1) * (row-1);

        if(row%2==1){
            area += col;
        }
        else{
            area += (2*row - col);
        }
        cout << area << endl;
        return;
    }
    else{
        long long ans = (col-1) * (col-1);
        if(col%2 == 0){
            ans += row;
        }
        else{
            ans += (2*col - row);
        }
        cout << ans <<endl;
    }
    return;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        long long x , y;
        cin >> x >> y;
        solve(x , y);
    }

    return 0;
}