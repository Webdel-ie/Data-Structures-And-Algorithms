#include<bits/stdc++.h>
using namespace std;

// TC : O(n^2)
// SC : O(1)

bool linearSearch(vector<int> &v, int t){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == t){
            return true;
        }
    }
    return false;
}

int  longestConsecutiveSq(vector<int> &v, int n){
    int longest = 1;
    for(int i = 0; i < n; i++){
        int count = 1;
        int x = v[i];
        while(linearSearch(v, x+1) == true){
            x = x + 1;
            count = count + 1;
        }
        longest = max(longest, count);
    }
    return longest;
}

int main(){
    vector<int> v = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = v.size();

    cout << "The Longest Consecutive Sequence in the array is: " << longestConsecutiveSq(v, n) << endl;
    return 0; 
}