#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    long long Recursion(int faces, int dice, int target){
        // base case
        if (target < 0) return 0;
        if (dice == 0 && target != 0) return 0;
        if (dice != 0 && target == 0) return 0;
        if (dice == 0 && target == 0) return 1;
        
        long long ans = 0;
        for (int i = 1; i <= faces; i++){
            ans = ans + Recursion(faces, dice-1, target-i);
        }
        return ans;
    }
    
    long long RecurMemo(int faces, int dice, int target, vector<vector<long long>> &dp){
        // base case
        if (target < 0) return 0;
        if (dice == 0 && target != 0) return 0;
        if (dice != 0 && target == 0) return 0;
        if (dice == 0 && target == 0) return 1;
        if (dp[dice][target] != -1) return dp[dice][target];
        
        long long ans = 0;
        for (int i = 1; i <= faces; i++){
            ans = ans + RecurMemo(faces, dice-1, target-i, dp);
        }
        dp[dice][target] = ans;
        return dp[dice][target];
    }
    
    long long Tabulation(int f, int d, int t){
        vector<vector<long long>> dp(d+1, vector<long long>(t+1, 0));
        dp[0][0] = 1;
        
        for (int dice=1; dice<=d; dice++){
            for (int target=1; target<=t; target++){
                long long ans = 0;
                for (int i = 1; i <= f; i++){
                    if (target-i>=0)
                        ans = ans + dp[dice-1][target-i];
                }
                dp[dice][target] = ans;
            }
        }
        return dp[d][t];
    }
    
    long long Space_Optimize(int f, int d, int t){
        vector<long long> curr(t+1, 0);
        vector<long long> prev(t+1, 0);
        prev[0] = 1;
        
        for (int dice=1; dice<=d; dice++){
            for (int target=1; target<=t; target++){
                long long ans = 0;
                for (int i = 1; i <= f; i++){
                    if (target-i>=0)
                        ans = ans + prev[target-i];
                }
                curr[target] = ans;
            }
            prev = curr;
        }
        return prev[t];
    }
    
    long long noOfWays(int M , int N , int X) {
        // Using Recursion
        // return Recursion(M, N, X);
        
        // Using Recursion + Memoization
        // vector<vector<long long>> dp(N+1, vector<long long>(X+1, -1));
        // return RecurMemo(M, N, X, dp);
        
        // Using Tabulation
        // return Tabulation(M, N, X);
        
        // Using Space_Optimization
        return Space_Optimize(M, N, X);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}