#include<bits/stdc++.h>
using namespace std;

bool Unique(vector<int> &arr, int n){
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        int cnt = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        ans.push_back(cnt);
        i+=cnt;
    }
    sort(ans.begin(), ans.end());
    for(int i=0;i<ans.size();i++){
        if(ans[i]==arr[i+1]){
            return false;
        }
        return true;
    }
}

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool found = Unique( arr, n);
    if(found){
        return true;
    }
    return false;
    
    return 0;
}