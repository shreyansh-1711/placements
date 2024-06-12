// int missingNumber(vector<int>& nums) {
//     int xorNums = 0;
//         int n = nums.size();
        
//         for(int i=0; i<n; i++){
//             xorNums ^= i;
//             xorNums ^= nums[i];
//         }
        
//         xorNums ^= n;
        
//         return xorNums;
//     }