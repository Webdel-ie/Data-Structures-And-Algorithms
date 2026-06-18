#include<bits/stdc++.h>
using namespace std;

// Optimized Approach------------------------------------------
// TC = O(n)
// SC = O(1)

int longest_subArr_length(vector<int> &v, int n, int k){
    int count = 0;
    int temp = 0;
    int sum = 0;
    int i = 0;
    while(i < n){
       sum += v[i];
       temp++;
       if(sum == k){
        count = max(count, temp);
        sum = 0;
        temp= 0;
       }
       if(sum > k){
        sum = 0;
        temp = 0;
       }
       i++;
    }
    return count;
}

int main(){
    vector<int> v = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = v.size();

    int k;
    cout << "Enter the value of k to find the longest sub-array that sums up to k: " ;
    cin >> k;
    cout << endl;

    cout << "The Length of the Longest Subarray with sum K is: " << longest_subArr_length(v, n, k);

}   