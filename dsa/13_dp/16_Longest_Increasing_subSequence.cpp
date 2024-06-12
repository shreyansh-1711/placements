/* TOPIC:  */

// TIME COMPLEXITY: O(N^2)
// SPACE COMPLEXITY: O(N^2)

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int>& nums, int n, int curr, int prev, vector<vector<int>>& dp){
        if(curr==n) return 0;
        if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];

        //take
        int take = 0;
        if(prev==-1 || nums[curr] > nums[prev])
            take = 1 + solve(nums, n, curr+1, curr, dp);
        
        int notTake = solve(nums, n, curr+1, prev, dp);

        return dp[curr][prev+1] =  max(take, notTake);

    }

    int solveTab(vector<int>& nums){
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        for(int curr = n-1; curr>=0; curr--){
            for(int prev = curr-1; prev>=-1;prev--){
                int take = 0;
                if(prev==-1 || nums[curr] > nums[prev])
                    take = 1 +dp[curr+1][curr+1];
                
                int notTake = dp[curr+1][prev+1];

                dp[curr][prev+1] =  max(take, notTake);
            }
        }
        return dp[0][-1+1];
    }

    // space = O(N)
    int solveSO(vector<int>& nums){
        int n = nums.size();
        // vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        vector<int> currRow(n+1,0);
        vector<int> next(n+1,0);
        for(int curr = n-1; curr>=0; curr--){
            for(int prev = curr-1; prev>=-1;prev--){
                int take = 0;
                if(prev==-1 || nums[curr] > nums[prev])
                    take = 1 + next[curr+1];
                
                int notTake = next[prev+1];

                currRow[prev+1] =  max(take, notTake);
            }
            next = currRow;
        }
        return next[0];
    }


    // DP with binary Search
        // TC = O(N log N)
    // SC = O(N)
     int solveOptimal(vector<int>& nums){
        int n = nums.size();
        if(n==0) return 0;
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i] > ans.back()){
                ans.push_back(nums[i]);
            }else{
                //just bada elelemt 
                int index = lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin();
                ans[index] = nums[i];   
            }
        }
        return ans.size();
    }

    int lengthOfLIS(vector<int>& nums) {
        // int n = nums.size();
        // vector<vector<int>> dp(n, vector<int>(n+1, -1));
        // return solve(nums, n, 0, -1, dp); 
        // return solveTab(nums);
        return solveOptimal(nums);
    }
};

int main() {

    

    return 0;
}