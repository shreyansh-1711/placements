#include <bits/stdc++.h>
using namespace std;

queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> s;
    int n = q.size();
    while(!q.empty()){
        int num = q.front();
        q.pop();
        s.push(num);
    }
    
    while(!s.empty()){
        int num = s.top();
        s.pop();
        q.push(num);
    }
    return q;
    
}

int main() {

    

    return 0;
}