//Elevator Request I

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int curr = 0;
        int t = 0;

        for(int i = 0; i < requests.size(); i++){
            if(curr == 0){
                while(curr != requests[i]){
                    curr++;
                    t++;
                }
                curr = requests[i];
            }
            else if(requests[i] < requests[i-1]){
                while(curr > requests[i]){
                  curr--;
                  t++;
                }
               curr = requests[i];
            }
            else if(requests[i] > requests[i-1]){
                while(curr < requests[i]){
                   curr++;
                   t++; 
                }
                curr = requests[i];
            }
        }
        return t;
    }
};
