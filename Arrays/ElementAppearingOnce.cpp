#include<bits/stdc++.h>
using namespace std;

// TC = O(2n)
// SC = O(1)

int appear_once(const vector<int> &v, int n){
    int s1 = 0;
    int s2 = 0;
    int x = (n+1)/2;

    for(int i = 1; i <= x ; i++){
       s1 += 2*i;
    }

    for(int i = 0; i < n; i++){
        s2 += v[i];
    }

    return (s1 - s2);
    
}

int main(){
    vector<int> v = {1, 1, 2, 3, 3, 4, 4};
    int n = v.size();

    cout << "The Element, that appears only once, is : " << appear_once(v, n) << endl;

    return 0;
}