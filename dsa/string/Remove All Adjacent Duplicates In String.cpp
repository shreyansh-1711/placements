// class Solution {
// public:
//     string removeDuplicates(string s) {
//         // int i=0, start=0;
//         // while(i<s.length()){
//         //     if(s[i]==s[i+1]){
//         //         s.erase(s.begin()+i);
//         //         s.erase(s.begin()+i);
//         //         i=0;
//         //     }else
//         //     {i++;}
           
//         // }
//         // return s;
//          string Result="";
//        Result=s[0];
//        for( int i=1;i<s.size();i++){
//          if(s[i]==Result.back()){
//           Result.pop_back();
//          }
//          else {
//            Result.push_back(s[i]);
//          }
//        }
//        return Result;
//     }
// };