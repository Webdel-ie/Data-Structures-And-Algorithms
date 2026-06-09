#include<bits/stdc++.h>
using namespace std;

bool is_sorted(const vector<int> &arr, int n){
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {12, 34, 45, 67, 89};
    int n = arr.size();
    
    if(is_sorted(arr, n)){
        cout << "The array is sorted in increasing order." << endl;
    }else{
        cout << "The array is not sorted in increasing order." << endl;
    }

    return 0;
}