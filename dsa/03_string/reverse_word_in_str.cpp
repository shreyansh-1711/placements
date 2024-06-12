// string reverseWords(string s) {
//   int st = 0;
//   for (int i = 0; i <= s.size(); i++) {
//     if (s[i] == ' ' || i == s.size()) {
//       int e = i - 1;
//       while (st < e) {
//         swap(s[st++], s[e--]);
//       }
//       st = i + 1;
//     }
//   }
//   return s;
// }

// string reverseOrderWords(string str) {
//     // Write your code here
//     str = reverseWords(str);
//     int s = 0, e = str.size() - 1;
//     while (s < e) {
//     swap(str[s++], str[e--]);
//     }
//     return str;
// }