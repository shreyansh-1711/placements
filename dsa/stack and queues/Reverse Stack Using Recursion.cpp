#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }

    int ele = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(ele);
}



void reverseStack(stack<int> &stack) {
    // Write your code here
     if(stack.empty()){
        return;
    }

    
    int ele = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack, ele);
}

int main() {

    

    return 0;
}