/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool check(vector<int>base, vector<int>newBox){
        if(newBox[0]<=base[0] &&  newBox[1]<=base[1] && newBox[2]<=base[2] )
            return true;
        else
            return false; 
    }

     int solveSO(int n, vector<vector<int>>& a){
        // int n = nums.size();
        // vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        vector<int> currRow(n+1,0);
        vector<int> next(n+1,0);
        for(int curr = n-1; curr>=0; curr--){
            for(int prev = curr-1; prev>=-1;prev--){
                int take = 0;
                if(prev==-1 || check(a[curr], a[prev]))
                    take = a[curr][2] + next[curr+1];
                
                int notTake = next[prev+1];

                currRow[prev+1] =  max(take, notTake);
            }
            next = currRow;
        }
        return next[0];
    }

    int maxHeight(vector<vector<int>>& cuboids) {
        for(auto &a : cuboids){
            sort(a.begin(), a.end());
        }
        sort(cuboids.begin(), cuboids.end());
        return solveSO(cuboids.size(), cuboids);

    }
};

int main() {

    

    return 0;
}