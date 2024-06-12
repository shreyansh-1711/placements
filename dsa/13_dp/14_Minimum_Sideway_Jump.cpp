/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int>& obstacles ,int currPos, int currLane){
        int n = obstacles.size()-1;
        if(currPos == n) return 0;
        if(obstacles[currPos+1]!= currLane){
            return solve(obstacles, currPos+1, currLane);
        }else{
            int ans = INT_MAX;
            for(int i=1;i<=3;i++){
                if(currLane!=i && obstacles[currPos]!=i){
                    ans = min(ans, 1+solve(obstacles, currPos, i));
                }
            }
            return ans;
        }
    }
    int solveMem(vector<int>& obstacles ,int currPos, int currLane ,vector<vector<int>>& dp){
        int n = obstacles.size()-1;
        if(currPos == n) return 0;
        if(dp[currLane][currPos] != -1) return dp[currLane][currPos];

        if(obstacles[currPos+1]!= currLane){
            return solveMem(obstacles, currPos+1, currLane, dp);
        }else{
            int ans = INT_MAX;
            for(int i=1;i<=3;i++){
                if(currLane!=i && obstacles[currPos]!=i){
                    ans = min(ans, 1+solveMem(obstacles, currPos, i,dp));
                }
            }
            dp[currLane][currPos] = ans;
            return dp[currLane][currPos];
        }
    }

    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<vector<int>> dp(4,vector<int>(n,-1));
        // return solve(obstacles,0,2);  
        return solveMem(obstacles,0,2,dp);     
    }
};

int main() {

    

    return 0;
}