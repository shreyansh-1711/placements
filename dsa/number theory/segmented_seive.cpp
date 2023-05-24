#include<bits/stdc++.h>
using namespace std;

int N = 1000000;
bool seive[N+1];
void createSeive(){
    for(int i=2;i<=N;i++){
        seive[i] = true;
    }
    for(int i=2;i*i<=N;i++){
        if(seive[i]){
            for(int j=i*i;j<=N;j+=i){
                seive[j] = false;
            }
        }
    }
}

vector<int> generatePrime(int N){
    vector<int> prime;
    for(int i=2;i<=N;i++){
        if(seive[i]){
            prime.push_back(i);
        }
    }
    return prime;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        vector<int> primes = generatePrime(sqrt(r));
        int dummy[r-l+1];
        for(int i=0;i<r-l+1;i++){
            dummy[i] = 1;
        }
        for(auto pr : primes){
            int firstMultiple = 
            for(int j=max(firstMultiple,pr*pr);j<=r;j++){
                dummy[j-l] = 0;
            }
        }
        for(int i=l;i<=r;i++){
            if(dummy[i-l]==1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
            }

    }
}