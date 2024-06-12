/* TOPIC:  */

// TIME COMPLEXITY: O(N^2)
// SPACE COMPLEXITY: O(N^2)

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int>& satisfaction, int index, int time){
        sort(satisfaction.begin(), satisfaction.end());
        if(index == satisfaction.size()) return 0;

        //include
        int incl = satisfaction[index]*(time+1) + solve(satisfaction, index+1, time+1);
        int excl = solve(satisfaction, index+1, time);
        return max(incl, excl);
    }
    int solveMem(vector<int>& satisfaction, int index, int time,vector<vector<int>>&dp){
     
        if(index == satisfaction.size()) return 0;
        if(dp[index][time]!=-1) return dp[index][time];

        //include
        int incl = satisfaction[index]*(time+1) + solveMem(satisfaction, index+1, time+1, dp);
        int excl = solveMem(satisfaction, index+1, time, dp);
        dp[index][time] = max(incl, excl);
        return dp[index][time];
    }

    int solveTab(vector<int>& satisfaction){
        int n = satisfaction.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        for(int index=n-1;index>=0;index--){
            for(int time = index; time>=0;time--){
                int incl = satisfaction[index]*(time+1) + dp[index+1][time+1];
                int excl = dp[index+1][time];
                dp[index][time] = max(incl, excl);
                
            }
        }
        return dp[0][0];
    }


    int maxSatisfaction(vector<int>& satisfaction) {
        // return solve(satisfaction,0,0);
        sort(satisfaction.begin(), satisfaction.end());
        // int n = satisfaction.size();
        // vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        // return solveMem(satisfaction,0,0,dp);
        return solveTab(satisfaction);
    }
};


int main() {

    

    return 0;
}