/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int>& nums) {
        int n=nums.size();
        int a,b,c;

        a = 0;
        b = nums[0];

        for(int i=1;i<n;i++){
            int incl = a + nums[i];
            int excl = b + 0;
            c = max(incl , excl);
            a = b;
            b = c;
        }
        return b;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        
        vector<int> first,last;

        for(int i = 0 ; i < n ; i++){
            if(i != n-1){
                first.push_back(nums[i]);
            }

            if(i != 0){
                last.push_back(nums[i]);
            }
        }

        return max(solve(first) , solve(last));
        }


         int solve(int idx, int n, vector<int>&nums, vector<int>&dp){
        if(idx >= n) return 0;
        if(dp[idx] != -1) return dp[idx];
        return dp[idx] = max(nums[idx] + solve(idx+2,n,nums,dp), solve(idx+1,n,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        return max(solve(0,n-1,nums,dp1), solve(1,n,nums,dp2));
    }
    
};

int main() {

    

    return 0;
}