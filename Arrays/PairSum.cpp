#include<bits/stdc++.h>
using namespace std;

// TWO POINTERS APPROACH
// TC : O(N)
// SC : O(2)

vector<int> pairSum(vector<int> nums, int target){
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
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return {};
}

 int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    cout << "the indexes whose values sum up to target are: ";
    for(int x : pairSum(nums, target)){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}