/* TOPIC: DP */

// TIME COMPLEXITY: O(N)
// SPACE COMPLEXITY: O(N)


#include <bits/stdc++.h>
using namespace std;

long long int solve(int n, vector<int>& dp){
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n] =((solve(n-1,dp)+solve(n-2,dp))*(n-1))%1000000007; 
    // long long int cnt =( ((n-1)%MOD)* ((solve(n-1,dp)%MOD) + (solve(n-2, dp)%MOD)) );
    return dp[n]%1000000007;
}

long long int solveTab(int n){
vector<long long int>dp(n+1,-1);
   dp[1]=0;
   dp[2]=1;
   for(int i=3;i<=n;i++){
      dp[i]=((dp[i-1]+dp[i-2])*(i-1))%1000000007;
   }
  return dp[n];
}

long long int countDerangements(int n) {
    // Write your code here.
    // vector<int> dp(n+1, -1);
    // return solve(n, dp);
    return solveTab(n);
}


int main() {

    

    return 0;
}