// class Solution
// {
//     public:
//     //Function to swap odd and even bits.
//     unsigned int swapBits(unsigned int x)
//     {
//     	// Your code here
//     	for(int i=0;i<32;i+=2){
//     	    int i_bit = (x>>i) & 1;
//     	    int i_1_bit = (x >> (i + 1)) & 1;
//             x = x - (i_bit << i) - (i_1_bit << (i + 1)) + (i_bit << (i + 1))  + (i_1_bit << i);
//     }
//          return x;
//     	}
    
// };