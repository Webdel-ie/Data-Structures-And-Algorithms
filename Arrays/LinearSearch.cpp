#include<bits/stdc++.h>
using namespace std;

int linear_search(const vector<int> arr, int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
             return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {6, 7, 8, 4, 1, 3, 2, 9};
    int n = arr.size();
    int target;
    cout << "Enter The Target To find in Array: ";
    cin >> target;
    cout << endl;
    
    cout << "The Target is successfully found at index : " << linear_search(arr, n, target) << endl;
    return 0;
}