#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// BRUTE FORCE APPROACH-----------------------------------------------------------------

// vector<int> pairSum(vector<int> nums, int target){
//     int n = nums.size();

//     vector<int> ans;

//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 26;

//     vector<int> ans = pairSum(nums, target);
//     cout << "the indexes whose values sum up to target are: "<<endl;
//     for(int x : ans){
//         cout << x << " "; 
//     }
//     return 0;
// }


//OPTIMIZED APPROACH -- TWO POINTERS ----------------------------------------------

int pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i = 0;
    int j = n-1;

    while(i < j){
        int pair_sum = nums[i] + nums[j];
        if(pair_sum > target){
            j--;
        }else if(pair_sum < target){
            i++;
        }else{
            return (i, j);
        }
    }
}

 int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    cout << "the indexes whose values sum up to target are: "<<  pairSum(nums, target) << endl;
    
    return 0;
}