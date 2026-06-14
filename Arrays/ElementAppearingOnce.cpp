#include<bits/stdc++.h>
using namespace std;

// Brute Force--------------------------------------------------
// TC = O(n*n)
// SC =O(1)

// Optimal Approach---------------------------------------------

// TC = O(n)
// SC = O(1)

int appear_once(const vector<int> &v, int n){
    int xor1 = 0;
    for(int i = 0; i < n; i++){
        xor1 ^= v[i];
    }
    return xor1;
}

int main(){
    vector<int> v = {1, 1, 2, 2, 6, 7, 7, 3, 3, 4, 4};
    int n = v.size();

    cout << "The Element, that appears only once, is : " << appear_once(v, n) << endl;

    return 0;
}