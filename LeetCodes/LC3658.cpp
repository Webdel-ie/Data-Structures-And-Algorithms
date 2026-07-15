#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// GCD of odd and even sums.

int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;

        for(int i = 1; i < 2*n; i++){
            if(i % 2){
                sumEven += i;
            }else{
                sumOdd += i;
            }
        }
        return gcd(sumEven, sumOdd);
    }

int main() {
    int n;
    cout << "Enter an integer: " ;
    cin >> n;
    
    cout << "The GCD of sum of odd and sum of even numbers upto an integer n is : " << gcdOfOddEvenSums(n) << endl;
    return 0;
}