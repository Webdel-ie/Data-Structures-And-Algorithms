#include<bits/stdc++.h>
using namespace std;

// Path Existance Queries in a Graph I

vector<bool> pathExistenceQueries(int n, const vector<int>& nums, int maxDiff, const vector<vector<int>>& queries){
    vector<bool> ans;
    vector<int> comp(n);
    comp[0] = 0;
    for(int i = 1; i < n; i++){
        if(nums[i] - nums[i-1] > maxDiff){
            comp[i] = comp[i-1] + 1;
        }else{
            comp[i] = comp[i - 1];
        }
    }

    for(int i = 0; i < queries.size(); i++){
        int u = queries[i][0];
        int v = queries[i][1];

        if(comp[u] == comp[v]){
            ans.push_back(true);
        }else{
            ans.push_back(false);
        }
    }
    return ans;
}

int main(){
    int n = 4;
    vector<int> nums = {2, 5, 6, 8};
    int maxDiff = 2;
    vector<vector<int>> queries = {{0, 1}, {0, 2}, {1, 3}, {2, 3}};

    cout << "The path existance b/w nodes for the given queries is: ";
    for(bool x :  pathExistenceQueries(n, nums, maxDiff, queries)){
        cout << x << " ";
    }
    return 0;
}