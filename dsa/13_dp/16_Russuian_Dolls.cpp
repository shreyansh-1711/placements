/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int n, vector<vector<int>>& envelopes,int curr,int prev)
    {
        if(curr == n)
        {
            return 0;
        }

        int include=0;
        if(prev == -1 or (envelopes[prev][0] < envelopes[curr][0] and 
        envelopes[prev][1] < envelopes[curr][1]))
        {
            //  check with and heigth both
            include = 1 + solve(n,envelopes,curr+1,curr);
        }

        int exclude = 0 + solve(n,envelopes, curr+1, prev);

        return max(include,exclude);
    }

     int solve_mem(int n, vector<vector<int>>& envelopes,int curr,int prev,vector<vector<int>> &dp)
    {
        if(curr == n)
        {
            return 0;
        }

        if(dp[curr][prev+1] != -1)
        return dp[curr][prev+1];


        int include=0;
        if(prev == -1 or (envelopes[prev][0] < envelopes[curr][0] and 
        envelopes[prev][1] < envelopes[curr][1]))
        {
            include = 1 + solve_mem(n,envelopes,curr+1,curr,dp);
        }

        int exclude = 0 + solve_mem(n,envelopes, curr+1, prev,dp);

        dp[curr][prev+1] = max(include,exclude);

        return dp[curr][prev+1];
    }
    
    
    static bool comp(const vector<int> &v1,const vector<int> &v2)
    {
        if(v1[0] == v2[0])
        {
            return v1[1] > v2[1];
        }
        else
        return v2[0] > v1[0];
    }

    int maxEnvelopes(vector<vector<int>>& envelopes) {
        // sort(envelopes.begin(), envelopes.end());
        // // return solve(envelopes.size(), envelopes, 0, -1);

        //  vector<vector<int>> dp(envelopes.size()+1,vector<int>(envelopes.size()+1,-1));
        // return solve_mem(envelopes.size(), envelopes, 0, -1,dp);
        int n = envelopes.size();
        sort(envelopes.begin(),envelopes.end(),comp);
        vector<int>arr;
        for(int i =0;i<n;i++)
        {
            if(arr.empty() || arr.back()<envelopes[i][1])
                arr.push_back(envelopes[i][1]);
            else
            {
                int index = lower_bound(arr.begin(),arr.end(),envelopes[i][1])
                        -   arr.begin();
                arr[index] = envelopes[i][1];
            }
        }
        
        return arr.size();
        
    }
};


int main() {

    

    return 0;
}