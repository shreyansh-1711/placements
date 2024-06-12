/* TOPIC: DP */

// Recursive+MEMO 
// TIME COMPLEXITY: O(N)
// SPACE COMPLEXITY: O(N)

// Tabulation
// TIME COMPLEXITY: O(N)
// SPACE COMPLEXITY: O(N)

// Space Optimazation
// TIME COMPLEXITY: O(N)
// SPACE COMPLEXITY: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fibb(int n, vector<int>& dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = fibb(n-1, dp) + fibb(n-2, dp);
        return dp[n];
    }
    int fib(int n) {
       vector<int> dp(n+1, -1);
        return fibb(n,dp);
    }
};

//Tabulation
 int fib(int n) {
        if(n == 0 || n == 1){
            return n;
        }
       vector<int> dp(n+1,-1);
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }


//Space Optization
 int fib(int n) {
        if(n == 0 || n == 1){
            return n;
        }
        int prev1 = 1;
        int prev2 = 0;
        for(int i=2;i<=n;i++){
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }    

int main() {

    

    return 0;
}

