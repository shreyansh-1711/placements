/* TOPIC: DP  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int n){
        if(n==1 || n==0) return 1;
        if(n==2) return 2;
        int ans = solve(n-1)+solve(n-2);
        return ans;
    }

    
    
    int climbStairs(int n) {
        return solve(n);
    }
};


int main() {

    

    return 0;
}