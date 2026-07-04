#include<bits/stdc++.h>
using namespace std;

vector<int> reverse_arr(vector<int> &v, int st, int end){
    while(st <= end){
        int temp = 0;
        temp = v[st];
        v[st] = v[end];
        v[end] = temp;
        st++;
        end--;
    }

    return v;
}

vector<int> rotate_D_places(vector<int> &v, int n, int D){

    reverse_arr(v, 0, D-1);
    reverse_arr(v, D, n-1);
    reverse_arr(v, 0, n-1);

    return v;
}

// Can me make this approach even more optimal??

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int n = v.size();

    int D;
    cout << "Enter the value of places required to rotate: " ;
    cin >> D;

    D = D % n;

    cout << "After Rotating the array by D places: ";
    for(int x : rotate_D_places(v, n, D)){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}