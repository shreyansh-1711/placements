// class Solution {
// public:
//     void heapify(vector<int>& nums,int size,int i){
//       int largest = i;
//       int left = 2 * i +1;
//       int right = 2 * i + 2;
//       if(left < size && nums[left] > nums[largest]){
//         largest = left;
//       }
//       if(right < size && nums[right] > nums[largest]){
//         largest = right;
//       }
//       if(largest != i){
//         swap(nums[largest],nums[i]);
//         heapify(nums,size,largest);
//       }
//     }
//      void buildheap(vector<int>&nums,int n){
//         for(int i=(n-2)/2;i>=0;i--){
//             heapify(nums,n,i);
//         }
//     }

//     void heapsort(vector<int>&nums,int n){
//         buildheap(nums,n);

//         for(int i=n-1;i>=0;i--){
//             swap(nums[i],nums[0]);
//             heapify(nums,i,0);
//         }
//     }
//     vector<int> sortArray(vector<int>& nums) {
//         heapsort(nums,nums.size());
//         return nums;
       
//     }
// }



// using stl 
// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         priority_queue<int,vector<int>,greater<int>> pq;
//         for (auto val: nums)pq.push(val);
//         for (int i=0; i<nums.size(); i++){
//             nums[i]= pq.top();
//             pq.pop();
//         }
//         return nums;
//     }
// };