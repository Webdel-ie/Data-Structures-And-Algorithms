#include<bits/stdc++.h>
using namespace std;

// LC1331: Array Rank Transform

vector<int> arrayRankTransform(vector<int>& arr){
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    map<int, int> mpp;
    int rank = 1;
    
    for(auto x : temp){
        if(mpp.find(x) == mpp.end()){
            mpp[x] = rank++;
        }
    }
    for(int i = 0; i < arr.size(); i++){
        arr[i] = mpp[arr[i]];
    }
    return arr;
}
int main(){
    vector<int> v = {37, 12, 28, 9, 100, 56, 80, 5, 12};
    
    cout << "The Rank Transform of the array is : ";
    for(auto x : arrayRankTransform(v)){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}