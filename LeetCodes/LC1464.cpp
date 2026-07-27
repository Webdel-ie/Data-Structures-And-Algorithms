#include<bits/stdc++.h>
using namespace std;

// Maximum Product of Two elements in an Array

int maxProduct(vector<int>& nums) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] > max1){
            max2 = max1;
            max1 = nums[i];
        }
        else if(nums[i] > max2) {
            max2 = nums[i];
        }
    }
    return (max1 - 1) * (max2 - 1);
}

int main(){
    vector<int> nums = {3, 5, 7, 2, 8}; 
    cout << "The maximum product of two elements in the array after decrementing value by 1 is : " << maxProduct(nums) << endl;
    return 0;
}