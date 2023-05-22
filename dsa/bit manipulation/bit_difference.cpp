// class Solution{
//     public:
//     int countSetBits(int n)
//     {
//         int count = 0;
//         while (n > 0) {
//             count++;
//             n &= (n - 1);
//         }
//         return count;
//     }
//     // Function to find number of bits needed to be flipped to convert A to B
//     int countBitsFlip(int a, int b){
        
//         // Your logic here
//          return countSetBits(a ^ b);
        
//     }
// };