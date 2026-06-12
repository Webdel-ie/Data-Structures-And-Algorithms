#include<bits/stdc++.h>
using namespace std;

int missing_no(vector<int> &v, int n){
    for(int i = 1; i <= n; i++){
        int flag = 0;

        for(int j = 0; j < n-1; j++){
            if(v[j] == i){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int n = v.size() + 1;

    cout << "The missing number is: " << missing_no(v, n) << endl;

    return 0;
}