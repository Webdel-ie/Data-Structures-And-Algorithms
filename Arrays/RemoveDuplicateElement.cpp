#include<bits/stdc++.h>
using namespace std;

// TC : O(n)
// SC : O(1)

int remove_duplicates(vector<int> &v, int n){
    int st = 0;
    int end = 1;
    while(end < n){

        if(v[end] == v[st]){
           end++;
        }else{
            st++;
            v[st] = v[end];
            end++;
        }

    }
    return v[st];
}

int main(){
    vector<int> v = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = v.size();

    cout <<  "Before removing duplicates:";
    for(int x :v ){
        cout << x << " ";
    }
    cout << endl;

    cout << "The Last Unique Element is :" << remove_duplicates(v, n) << endl;
    cout << endl;

    return 0;
}