/* TOPIC: ' */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
bool solveMem(int n,vector<int> &a,int tar,vector<vector<int>>&dp){
        if(tar==0) return 1;
        if(n==0) return a[0]==tar;
        if(dp[n][tar]!=-1) return dp[n][tar];
        bool b1 = solveMem(n-1,a,tar,dp);
        bool b2 = 0;
        if(a[n]<=tar)
        b2 = solveMem(n-1,a,tar-a[n],dp);
        return dp[n][tar] = b1|b2;
    }

    bool canPartition(vector<int>& a) {
        int n = a.size();
        int sum =0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        if(sum&1) return 0;
        int tar = sum/=2;
        vector<vector<int>>dp(n,vector<int>(tar+1,-1));
        return solveMem(n-1,a,tar,dp);
    }
};

int main() {

    

    return 0;
}