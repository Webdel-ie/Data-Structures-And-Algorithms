#include<bits/stdc++.h>
using namespace std;

// Smallest Divisible Digit Product I

int smallestNumber(int n, int t) {
    int m = n;
    for(int i = 1; i <= 10; i++){
        n = m;
        int prod = 1;
        while(n > 0){
            int dig = n % 10;
            prod *= dig;
            n /= 10;
        }
        if(prod % t != 0){
            m++;
        }
    }
    return m;
}

int main(){
    int n = 15;
    int t = 3;

    cout << 'The smallest number greater than or equal to n such that the product of its digits is divisible by t << smallestNumber(n, t) << endl;
    return 0;
}