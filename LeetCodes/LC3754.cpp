#include<bits/stdc++.h>
using namespace std;

// Concatenate non-zero digits and multiply their sum;

long long sumAndMultiply(int n){
    int digit = 0;
    int sum = 0;
    long long x = 0;
    long long rev = 0;
    while(n > 0){
        rev = rev * 10 +(n % 10);
        n /= 10;
    }
    while(rev > 0){
        int digit = rev % 10;
        rev /= 10;
        if(digit != 0){
            x = x * 10 + digit;
            sum += digit;
        }
    }
    return x * sum;
}

int main(){
    int n;
    cout << "Enter a number n: " ;
    cin >> n;
    cout << endl;

    cout << "The answer is : " << sumAndMultiply(n) << endl;

    return 0;
}