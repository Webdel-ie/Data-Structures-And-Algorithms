#include<bits/stdc++.h>
using namespace std;

// TC : O(3n)
// SC : O(1)

vector<int> nextGreaterPermutation(vector<int> &v, int n){
    int idx = INT_MIN;
    for(int i = n - 2; i >= 0; i--){
        if(v[i] < v[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == INT_MIN){
        reverse(v.begin(), v.end());
    }

    for(int i = n-1; i >= 0; i--){
        if(v[i] > v[idx]){
            swap(v[i], v[idx]);
            break;
        }
    }
    reverse(v.begin() + idx + 1, v.end());
    return v;
}

int main(){
    vector<int> v = {2, 1, 5, 4, 3, 0, 0};
    int n = v.size();

    cout << "The next Permutation will be: ";
    for(int x : nextGreaterPermutation(v, n)){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}