#include<bits/stdc++.h>
using namespace std;

int largest_element(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
       if(arr[i] > max){
             max = arr[i];
       }
    }
    return max;
}

int main(){
    int arr[5] = {34, 56, 78, 12, 18};
    int n = 5;
    
    int max_element = largest_element(arr, n);
    cout << "The largest element in the array is: " << max_element << endl;
    return 0;
}