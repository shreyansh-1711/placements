/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solRec(vector<int>& coins, int x){
        if(x == 0) return 0;
        if(x < 0) return INT_MAX;

        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans = solRec(coins, x-coins[i]);
            if(ans!=INT_MAX){
                mini = min(mini,1+ans);
            }
        }
        return mini;
    }
    int solveMem(vector<int>& coins, int x, vector<int>& dp){
        if(x == 0) return 0;
        if(x < 0) return INT_MAX;
        if(dp[x]!=-1) return dp[x];

        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans = solveMem(coins, x-coins[i], dp);
            if(ans!=INT_MAX){
                mini = min(mini,1+ans);
            }
        }
        dp[x] = mini;
        return dp[x];
    }
    int coinChange(vector<int>& coins, int amount) {
        // int ans = solRec(coins,amount );
        // if(ans == INT_MAX){
        //     return -1;
        // }
        // return ans;
        int n = coins.size();
        vector<int> dp(amount+1,-1);
        int ans = solveMem(coins, amount, dp);
        if(ans == INT_MAX){
            return -1;
        }else{return ans;}
        // return ans;
    }
};

int main() {

    

    return 0;
}