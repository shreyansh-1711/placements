/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int BS(vector<int>& nums ,int s, int e, int target){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<target){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }return s;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        // int start=-1, end=-1;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==target){
        //         start=i;
        //         break;
        //     }
        // }
        // for(int i=n-1;i>=0;i--){
        //     if(nums[i]==target){
        //         end=i;
        //         break;
        //     }
        // }
        // return {start, end};
        int s=0, e=nums.size()-1;
        int start = BS(nums, s, e, target);
        int end = BS(nums,s,e,target+1)-1;
        if(start<nums.size() && nums[start]==target){
            return {start, end};
        }
        return {-1,-1};
    }
};

int main() {

    

    return 0;
}