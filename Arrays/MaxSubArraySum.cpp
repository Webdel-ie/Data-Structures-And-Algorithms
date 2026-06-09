#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


// Brute Force Approach---------------------------------------------------

// int main(){
//     int n = 7;
//     int arr[7] = {3, -4, 5, 4, -1, 7, -8};

//     int max_sum = INT_MIN;
//     for(int st = 0; st < n; st++){
//         int curr_sum = 0;
//         for(int end = st; end < n; end++){
//             curr_sum += arr[end];
//             max_sum = max(curr_sum, max_sum);
//         }
//     }

//     cout << "Max subarray sum = "<< max_sum << endl;


//     return 0;
// }



// KADANE'S ALGORITHM-----------------------------------------------

int main(){
    // int arr[9] = {-2, 1, -3, 4, -1, 2, 1,-5, 4};
    // int n = 9;
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0; i < n; i++){
        curr_sum += arr[i];
        max_sum = max(curr_sum, max_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }

    cout << "Max SubArray Sum is = " << max_sum << endl;

    return 0;
}