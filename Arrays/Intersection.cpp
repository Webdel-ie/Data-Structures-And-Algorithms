#include<bits/stdc++.h>
using namespace std;

vector<int> intersection_arr(vector<int> &v1, vector<int> &v2, int n1, int n2){
    vector<int> ans;
    int i = 0;
    int j = 0;

    while(i < n1 && j < n2){
        if(v1[i] < v2[j]){
            i++;
        }else if(v1[i] == v2[j]){
            if(ans.size() == 0 || ans.back() != v1[i]){
                ans.push_back(v1[i]);
            }
            i++;
            j++;
        }else{
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> v1 = {1, 1, 2, 3, 4, 5, 6, 8, 9};
    vector<int> v2 = {1, 2, 3, 5, 6, 6, 7, 10};

    int n1 = v1.size();
    int n2 = v2.size();

    cout << "The Intersection of both the Arrays is: ";
    for(int x : intersection_arr(v1, v2, n1, n2)){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
