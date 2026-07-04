#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// KADANE'S ALGORITHM
// TC : O(n)
// SC : O(1)

int main(){
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0; i < n; i++){
        curr_sum += arr[i];
        max_sum = max(curr_sum, max_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }

    cout << "Max SubArray Sum is = " << max_sum << endl;

    return 0;
}