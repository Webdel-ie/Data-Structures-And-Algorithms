#include<bits/stdc++.h>
using namespace std;

// TC : O(2n)
// SC : O(n)

int majorityElement(const vector<int> &v, int n){
    int count = 0; 
    int el;

    for(int i = 0; i < n; i++){
        if(count == 0){
            count++;
            el = v[i];
        }else if(v[i] == el){
            count++;
        }else{
            count--;
        }
    }

    // To check, in case the Majority Element doesn't exist.
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == el){
            cnt1++;
        }
        if(cnt1 > n/2){
            return el;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    int n = v.size();

    cout << "The majority element appearing more than n/2 times is: " << majorityElement(v, n);
    return 0;
}