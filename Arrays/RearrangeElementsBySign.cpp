#include<bits/stdc++.h>
using namespace std;

// TC : O(n)
// SC : O(n)

vector<int> rearrangeElementsBySize(const vector<int> &v, int n){
    vector<int> ans(n, 0);
    int pos = 0;
    int neg = 1;
    
    for(int i = 0; i < n; i++){
        if(v[i] < 0){
            ans[neg] = v[i];
            neg += 2;
        }
        else{
            ans[pos] = v[i];
            pos += 2;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {3, 1, -2, -5, 2,-4};
    int n = v.size();

    cout << "Ater Re-arranging by sign, the elements are as: ";
    for(int x : rearrangeElementsBySize(v, n)){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}