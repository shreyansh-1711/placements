
#include <bits/stdc++.h>
using namespace std;

int main() {

    stack<int> s;
    s.push(1);
    s.push(2);
    
    s.pop();

    cout << s.top() << endl;

    if(s.empty()){
        cout << "stack is empty" << endl;
    }else{
        cout << "stack is not empty" << endl;
    }
    

    return 0;
}