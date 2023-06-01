

#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression)
{
    // Write your code here.
      stack<char> c;
    for(int i=0; i< expression.length(); i++){
        char ch = expression[i];
        if(ch == '(' || ch == '{' || ch == '['){
            c.push(ch);
        }
        else{
           if(c.empty()){
               return false;
           }
           else{
               char top = c.top();
               if( (top == '(' && ch == ')' ) || ( top == '[' && ch == ']' ) || ( top == '{' && ch == '}' ) ){
                   c.pop();
               }
               else{
                   return false;
               }
           }
        }
    }
    if(!c.empty()){
        return false;
    }
    else{
        return true;
    }
}

int main() {

    

    return 0;
}