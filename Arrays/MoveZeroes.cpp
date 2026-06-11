#include<bits/stdc++.h>
using namespace std;

// BRUTE FORCE APPROACH----------------------------------------------------------------------------------------------------

// vector<int> move_zeroes(vector<int> &v, int n){
//     vector<int> temp;
//     for(int i = 0; i < n; i++){
//        if(v[i] != 0){
//           temp.push_back(v[i]);
//        }
//     }
    
//     for(int i = 0; i < temp.size(); i++){
//         v[i] = temp[i];
//     }

//     for(int i = temp.size(); i < n; i++){
//         v[i] = 0;
//     }

//     return v;
// }

// OPTIMAL APPROACH---------------------------------------------------------------------------------------------

vector<int> move_zeroes(vector<int> &v, int n){
    
    int j = INT_MIN;
    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j+1; i < n; i++){
        if(v[i] != 0){
            swap(v[j], v[i]);
            j++;
        }
    }
    return v;
}

int main(){
    vector<int> v = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = v.size();

    cout << "After moving zeroes: " ;
    for(int i : move_zeroes(v, n)){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}