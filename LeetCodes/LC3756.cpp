#include<bits/stdc++.h>
using namespace std;

// Concatenate non-zero digits and multiply their sum II.

vector<int> sumAndMuliply(string s, vector<vector<int>>& queries){
    vector<int> ans;
    for(int i = 0; i < queries.size(); i++){
        int l = queries[i][0];
        int r = queries[i][1];

        long long x = 0;
        long long sum = 0;
        
        for(int j = l; j <= r; j++){
            int digit = s[j] - '0';
            if (digit != 0){
                x = (x * 10 + digit);
                sum += digit;
            }
        }
        ans.push_back(x * sum);
    }
    return ans;
}

// This code can be optimized using prefix-sum.

int main(){
    string s = "10203004";
    vector<vector<int>> queries = {{0, 7},{ 1, 3}, {4, 6}};

    cout << "The output is : ";
    for(auto x : sumAndMuliply(s, queries)){
        cout << x << " ";
    }
    return 0;
}