// class Solution{   
// public:
//     long maximumSumSubarray(int k, vector<int> &arr , int n){
//         // code here 
//         if(n<k){
//             return -1;
//         }
//         int i=0, j=0;
//         long long int ans=0, sum=0;
//         while(j<n){
//             sum=sum+arr[j];
            
//             if(j-i+1 < k){
//                 j++;
//             }else if(j-i+1==k){
//                 ans=max(ans, sum);
//                 sum=sum-arr[i];
//                 i++;
//                 j++;
//             }
//         }
//         return ans;
        
        
//     }
// };