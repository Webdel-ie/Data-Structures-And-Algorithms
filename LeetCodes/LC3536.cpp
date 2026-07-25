#include<bits/stdc++.h>
using namespace std;

// Maximum Products of Two Digits

int maxProduct(int n) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    while(n > 0){
        int d = n % 10;
        if(d > max1) {
            max2 = max1;
            max1 = d;
        }else if(d > max2){
            max2 = d;
        }
        n /= 10;
    }
    return max1 * max2;
}

int main(){
    int n = 13784;
    cout << "the maximum product of any two digits in n : " <<maxProduct(n)  << endl;
}