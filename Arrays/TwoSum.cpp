#include<bits/stdc++.h>
using namespace std;

// TC = O(n)
// SC = O(1)

vector<int> two_sum(vector<int> &v, int target_sum){
    int l = 0; 
    int r = v.size()-1;
    sort(v.begin(), v.end());
    while(l < r){
        int sum = v[l] + v[r];
        if(sum == target_sum){
            return {l, r};
        }
        else if(sum < target_sum)  l++;
        else r--;
    }
    return {};
}

int main(){
    vector<int> v = {2, 5, 6, 8, 11};
    int target_sum;

    cout << "Enter the target sum: " ;
    cin >> target_sum ;

    cout << "The target sum is found at indexes: ";
    for(int x : two_sum(v, target_sum)){
        cout << x << " ";
    }
    return 0;
}