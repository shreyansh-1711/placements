#include<bits/stdc++.h>
using namespace std;
#define int long long

int power(int a,int b, int c){
    int res=1;
    a=a%c;
    while(b>0){
        if(b&1){
            res=(res*a)%c;

        }
        b>>=1;
        a=(a*a)%c;
    }
    return res;
}
int modInv(int a, int b){
    return power(a,b-2,b);
}
int modFact(int n, int p){
    if(p<=n){
        return 0;
    }
    int res=(p-1);
    for(int i=n+1;i<p;i++){
        res = (res*modInv(i,p))%p;
    }
    return res;
 }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        cout<<modFact(n,p)<<endl;
    }
}