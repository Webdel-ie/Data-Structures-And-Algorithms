#include<bits/stdc++.h>
using namespace std;

// BRUTE FORCE APPROACH---------------------------------------------------------------------

// vector<int> union_arr(vector<int> v1, vector<int> v2, int n1, int n2){
//     set<int> st;
//     vector<int> ans;

//     for(int i = 0; i < n1; i++){
//         st.insert(v1[i]);
//     }

//     for(int i = 0; i < n2; i++){
//         st.insert(v2[i]);
//     }
    
//     for(auto x : st){
//         ans.push_back(x);
//     }
//     return ans;
// }


// OPTIMAL APPROACH------------------------------------------------------------------------

vector<int> union_arr(vector<int> v1, vector<int> v2, int n1, int n2){
    vector<int> ans;
    int i = 0;
    int j = 0;
    
    while(i < n1 && j < n2){
        if(v1[i] <= v2[j]){
            if(ans.size() == 0 || ans.back() != v1[i]){
                ans.push_back(v1[i]);
            }
            i++;
        }else{
            if(ans.size() == 0 || ans.back() != v2[j]){
                ans.push_back(v2[j]);
            }
            j++;
        }
    }

    while(j < n2){
        if(ans.size() == 0 || ans.back() != v2[j]){
            ans.push_back(v2[j]);
        }
        j++;
    }
    while(i < n1){
        if(ans.size() == 0 || ans.back() != v1[i]){
            ans.push_back(v1[i]);
        }
        i++;
    }
   
    return ans;
}

int main(){
    vector<int> v1 = {1, 1, 2, 3, 4, 5};
    vector<int> v2 = {2, 3, 4, 4, 5, 6, 7, 7};

    int n1 = v1.size();
    int n2 = v2.size();
    
    cout << "The Union of Both The Arrays is : ";
    for(int x :  union_arr( v1, v2, n1, n2)){
       cout << x << " ";
    }
    cout << endl;

    return 0; 
}