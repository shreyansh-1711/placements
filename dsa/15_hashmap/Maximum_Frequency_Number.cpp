

#include <bits/stdc++.h>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    map<int, int> m;
    int maxFreq = 0;
    int maxAns = 0;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
        maxFreq = max(maxFreq, m[arr[i]]);
    }
    for(int i=0;i<n;i++){
        if(maxFreq == m[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}

int main() {

    

    return 0;
}