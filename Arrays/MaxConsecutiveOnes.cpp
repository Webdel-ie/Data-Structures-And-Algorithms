#include<bits/stdc++.h>
using namespace std;

// TC = O(n)
// SC = O(1)

int max_consecutive_ones(const vector<int> &v, int n){
    int count = INT_MIN;
    int temp = 0;

    for(int i = 0; i < n; i++){
        if(v[i] != 0){
           temp++;
           count = max(count, temp);
        }else{
            temp = 0;
        }
    }
    return count;
}

int main(){
    vector<int> v = {1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1};
    int n = v.size();

    cout << "The Maximum Consecutive Ones are: " << max_consecutive_ones(v, n) << endl;

    return 0;
}