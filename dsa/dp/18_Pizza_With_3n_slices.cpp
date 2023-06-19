/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int solve(int index,int endIndex,  vector<int>& slices, int n){
        if(n==0 || index > endIndex) return 0;

        //take
        int op1 = slices[index] + solve(index+2,endIndex,slices,n-1);
        //not take
        int op2 = solve(index+1,endIndex, slices,n);

        return max(op1,op2);
    }

    int solveMem(int index,int endIndex,  vector<int>& slices, int n, vector<vector<int>>& dp){
        if(n==0 || index > endIndex) return 0;
        if( dp[index][n]!=-1) return  dp[index][n];

        //take
        int op1 = slices[index] + solveMem(index+2,endIndex,slices,n-1,dp);
        //not take
        int op2 = solveMem(index+1,endIndex, slices,n,dp);

        dp[index][n] = max(op1,op2);
        return  dp[index][n];
    }


    int maxSizeSlices(vector<int>& slices) {
        // int k  =slices.size();
        // // vector<vector<int>> dp()
        // int case1 = solve(0,k-2, slices,k/3);
        // int case2 = solve(1,k-1, slices, k/3);
        // return max(case1,case2);

         int k  =slices.size();
        vector<vector<int>> dp1(k,vector<int>(k,-1));
        int case1 = solveMem(0,k-2, slices,k/3,dp1);
        
        vector<vector<int>> dp2(k,vector<int>(k,-1));
        int case2 = solveMem(1,k-1, slices, k/3,dp2);
        return max(case1,case2);

    }
};  

int main() {

    

    return 0;
}