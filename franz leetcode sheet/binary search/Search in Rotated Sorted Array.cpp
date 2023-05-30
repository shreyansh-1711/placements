/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getPivot(vector<int>& arr, int n){
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]>=arr[0]){
                s=mid+1;
            }else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    } 
    int BS(vector<int>& nums, int s, int e,int target) {
        // int n=nums.size();
        // int s =0;
        // int e =n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            if(target>nums[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int k) {
        int n=nums.size();
        int pivot = getPivot(nums,n);
        if(k>=nums[pivot] && k<=nums[n-1]){
            return BS(nums, pivot, n-1,k);
        }else{
            return BS(nums,0,pivot-1,k);
        }
    }
};

int main() {

    

    return 0;
}