#include<bits/stdc++.h>
using namespace std;

// TC = O(n)
// SC = O(1)

vector<int> two_sum(vector<int> &v, int target_sum){
    int n = v.size();
    int l = 0;
    int r = n-1;
    while(l <= r){
       if(v[l] + v[r] == target_sum){
        return {l, r};
       }
       else if(v[l] + v[r] > target_sum){
        r--;
       }
       else{
        l++;
       }
    }
    return {};
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target_sum;

    cout << "Enter the target sum: " ;
    cin >> target_sum ;

    cout << "The target sum is found at indexes: ";
    vector<int> res = two_sum(v, target_sum);
    for(size_t i = 0; i < res.size(); ++i){
        if(i) cout << ", ";
        cout << res[i];
    }
    if(res.empty()) cout << "None";


    return 0;
}