#include<bits/stdc++.h>
using namespace std;

// Shift 2D Grid

vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k){
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> ans(m, vector<int> (n));
    k %= (m * n);
    if( k == 0 ){
        return grid;
    }
    for(int i = 0; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            int oldIdx = (i * n) + j;
            int newIdx = (oldIdx + k) % (m * n);

            int newRow = newIdx / n;
            int newCol = newIdx % n;

            ans[newRow][newCol] = grid[i][j];
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> grid = {{3,8,1,9},{19,7,2,5},{4,6,11,10},{12,0,21,13}};
    int k = 4;
    cout << "After shifting by k times, the grid becomes : " << endl;
    auto ans = shiftGrid(grid, k);
    for(auto row : ans){
        for(auto val : row){
        cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}