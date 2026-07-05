#include<bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices, int n){
    int mini = prices[0];
    int profit = 0;
    for(int i = 1; i < n; i++){
        int cost = prices[i] - mini;
        profit = max(cost, profit);
        mini = min(mini, prices[i]);
    }
    return profit;
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int n = prices.size();

    cout << "The profit by buying and selling the stock on the best day is : " << maximumProfit(prices, n);

    return 0;
}