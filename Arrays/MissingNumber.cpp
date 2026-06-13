#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH--------------------------------------------------------------------------
// TC = O(n*n)
// SC = o(1)


// BETTER APPROACH------------------------------------------------------------------------------
// TC = O(2n)
// SC = O(2n)

//OPTIMAL APPROACH------------------------------------------------------------------------------
//  1. Sum Method
// TC = O(n)
// SC = O(1)

int missing_no(const vector<int> v, int n){
    int sum = 0; 
    int s = 0;
    
    sum = (n * (n + 1) / 2);

    for(int i = 0; i < v.size(); i++){
       s += v[i];
    }
    return (sum - s);
}

int main(){
    vector<int> v = {1, 2, 4, 5};
    int n = v.size() + 1;

    cout << "The missing number is: " << missing_no(v, n) << endl;

    return 0;
}