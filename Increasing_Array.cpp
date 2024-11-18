#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin >> nums[i];
    }
    long long moves = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(nums[i] > nums[i+1]){
            moves += nums[i] - nums[i+1];
            nums[i+1] = nums[i]; 
        }
    }
    cout << moves;

    return 0;
}