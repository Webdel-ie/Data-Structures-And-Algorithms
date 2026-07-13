#include<bits/stdc++.h>
using namespace std;

// Sequential Digits

vector<int> sequentialDigits(int low, int high) {
    vector<int> ans;
    string s = "123456789";

    int lowLen = to_string(low).size();
    int highLen = to_string(high).size();

    for(int len = lowLen; len <= min(highLen, 9); len++) {
        for(int start = 0; start + len < s.size(); start++) {
            string temp = s.substr(start, len);
            int num = stoi(temp);
            if(num >= low && num <= high) {
                ans.push_back(num);
            }
        }
    }
    return ans;
}

int main(){
    int low = 1000;
    int high = 13000;

    cout << "list of all the integers in the range [low, high] inclusive that have sequential digits: " << endl;
    for(auto x : sequentialDigits(low, high)){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}