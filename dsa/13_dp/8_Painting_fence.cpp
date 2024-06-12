/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution{
    // #define MOD 1000000007
    public:
    // long long int add(int a, int b){
    //     return (a%MOD + b%MOD)%MOD;
    // }
    // long long int multi(int a, int b){
    //     return ( (a%MOD)*(b%MOD)) % MOD;
    // }
    const int mod = 1e9+7;
    long long solve(int n,int k,vector<int> &dp){
        if(n==1) return k;
        if(n==2) return k*k;
        if(dp[n]!=-1) return dp[n]%mod;
        return dp[n] = ((solve(n-2,k,dp)*(k-1))%mod + (solve(n-1,k,dp)*(k-1))%mod)%mod;
    }
    long long countWays(int n, int k){
        // code here
        vector<int> dp(n+1,-1);
        return solve(n,k,dp);
    }
};

int main() {

    

    return 0;
}