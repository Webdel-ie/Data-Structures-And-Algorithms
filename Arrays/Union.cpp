#include<bits/stdc++.h>
using namespace std;

vector<int> union_arr(vector<int> v1, vector<int> v2, int n1, int n2){
    set<int> st;
    vector<int> ans;

    for(int i = 0; i < n1; i++){
        st.insert(v1[i]);
    }

    for(int i = 0; i < n2; i++){
        st.insert(v2[i]);
    }
    
    for(auto x : st){
        ans.push_back(x);
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