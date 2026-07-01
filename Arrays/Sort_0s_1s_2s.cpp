#include<bits/stdc++.h>
using namespace std;

// TC : O(N*N)
// SC : O(1)

vector<int> sort_0s_1s_2s(vector<int> &v, int n){
    int count_0s = 0;
    int count_1s = 0;
    int count_2s = 0;

    for(int i = 0; i < n; i++){
        if(v[i] == 0)  count_0s++;
        if(v[i] == 1)  count_1s++;
        if(v[i] == 2)  count_2s++;
    }

    for(int i = 0; i < count_0s; i++){
        v[i] = 0;
    }
    for(int i = count_0s; i < count_0s + count_1s; i++){
        v[i] = 1;
    }
    for(int i = count_0s + count_1s; i < n; i++){
        v[i] = 2;
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