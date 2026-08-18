// Nearest Available Drone

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        vector<pair<int, int>> minDist;
        
        for(int i = 0; i < drones.size(); i++){
            int x = abs(drones[i][0] - target[0]);
            int y = abs(drones[i][1] - target[1]);
            int dist = x + y;
            if(dist <= drones[i][2]){
                minDist.push_back({dist, i});
            }
        }
        int minIdx = 0;
        for(int i = 1; i < minDist.size(); i++){
            if(minDist[i].first < minDist[minIdx].first){
                minIdx = i;
            }
        }
        if(minDist.empty()){
            return -1;
        }
        return minDist[minIdx].second;
    }
};
