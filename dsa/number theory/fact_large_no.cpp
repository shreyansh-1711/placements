// class Solution {
// public:
//     vector<int> factorial(int N){
//          vector<int> res;
//     res.push_back(1);
    
//     for(int x=2;x<=N;x++)
//     {
//         int carry=0;
//         for(int i=0;i<res.size();i++)
//         {
//             int val = res[i]*x + carry;
//             res[i] = val%10;
//             carry = val/10;
//         }
//         while(carry)
//         {
//             res.push_back(carry%10);
//             carry=carry/10;
//         }
//     }
//     reverse(res.begin(),res.end());
//     return res;
//     }
// };