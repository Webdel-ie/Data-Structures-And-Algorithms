#include<bits/stdc++.h>
using namespace std;

// How many numbers are smaller than the current number in an array?
// TC = O(n^2)
// SC = O(n)

 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int curr = 0;
        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] > nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }

int main(){
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> ans = smallerNumbersThanCurrent(nums);

    cout << "The number of smaller elements than the current element are: ";
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}