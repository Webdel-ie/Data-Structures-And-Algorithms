#include<bits/stdc++.h>
using namespace std;

// TC : O(N)
// SC : O(1)

vector<int> sort_0s_1s_2s(vector<int> &v, int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        if(v[mid] == 0){
           swap(v[low], v[mid]);
           low++;
           mid++;
        }
        else if(v[mid] == 1){
           mid++;
        }
        else{
           swap(v[mid], v[high]);
           high--;
        }
    }
    return v;
}

int main(){
    vector<int> v = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = v.size();

    cout << "The sorted array is: " << endl;
    for(int x : sort_0s_1s_2s(v, n)){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}