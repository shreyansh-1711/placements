#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //same as book allocation problem ggez
    bool possible(vector<int>&weights,int days,int mid){
        int sum=0;
        int d=1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
                
            }
            else{
                d++;
                sum=weights[i];
            }
        }

        if(d<=days)return true;
        return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=0,high=0;
        for(int i=0;i<n;i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}