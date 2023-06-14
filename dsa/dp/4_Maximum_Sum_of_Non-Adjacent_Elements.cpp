/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int>& nums, int n, vector<int>& dp){
        if(n<0) return 0;
        if(n==0) return nums[0];
        if(dp[n]!=-1) return dp[n];
        //take
        int incl = solve(nums, n-2, dp) + nums[n];
        //not take
        int excl = solve(nums, n-1, dp) + 0;

        dp[n] = max(incl,excl);
        return  dp[n] ;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        int ans = solve(nums, n-1, dp);
        return ans;
    }
};

int main() {

    

    return 0;
}