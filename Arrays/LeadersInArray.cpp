#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int> &v, int n){
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n - 1; i >= 0; i--){
        if(v[i] > maxi){
            ans.push_back(v[i]);
        }
        maxi = max(maxi, v[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> v = {10, 22, 12, 3, 0, 6};
    int n = v.size();

    cout << "The Leader in the Array is : " ;
    for(int x : superiorElements(v, n)){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}