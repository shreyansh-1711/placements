#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
       stack<int> st;
        for(int i = 0 ; i < s.size() ; i++){
            st.push(s[i]);
        } 
        int i = 0;
        while(!st.empty()){
            s[i]=st.top();
            st.pop();
            i++;
        }
    // reverse(s.begin(), s.end());
    }
}; 

int main() {

    

    return 0;
}