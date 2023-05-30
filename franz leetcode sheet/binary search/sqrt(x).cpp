/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;


class Solution {
    void funsqrt(int s,int e,int &x,int &ans){
        int mid=s+(e-s)/2;
      unsigned long long int temp=1LL*mid*mid;
        if(s>e) return;
        if(temp<=x) {
             ans=mid;
          funsqrt(mid+1,e,x,ans);
             }
          else funsqrt(s,mid-1,x,ans);
       
    }
public:
    int mySqrt(int x) {
        int ans=0;
        if(x==1) return 1;
       funsqrt(1,x/2,x,ans);
       return ans;
       
    }
};


int main() {

    

    return 0;
}