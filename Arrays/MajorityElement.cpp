#include<bits/stdc++.h>
using namespace std;

// TC : O(nlogn)
// SC : O(n)

int majorityElement(const vector<int> &v, int n){
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[v[i]]++;
    }

    for(auto it : mpp){
        if(it.second > n/2) return it.first;
    }
    return -1;
}

int main(){
    vector<int> v = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    int n = v.size();

    cout << "The majority element appearing more than n/2 times is: " << majorityElement(v, n);
    return 0;
}