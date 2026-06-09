#include<bits/stdc++.h>
using namespace std;

int second_largest_element(int arr[], int n){
    int max = arr[0]; 
    int second_largest = INT_MIN;
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            second_largest = max;
            max = arr[i];
        }else if(arr[i] > second_largest && arr[i] < max){
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main(){
    int arr[5] = {34, 56, 78, 18, 23};
    int n = 5;

    cout << "The second largest element in the array is: " << second_largest_element(arr, n) << endl;

    return 0;
}