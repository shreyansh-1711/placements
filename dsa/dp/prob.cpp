#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NUlong long);cout.tie(NULL)

void solve() {
    int n,k,g;
		cin >> n >> k >> g;
		int mid=(g/2)-1;
		int temp=mid;
		mid=mid*n;
		if(mid>=k*g){
			cout << k*g << endl;
		}
		else{
			int a=k*g-mid;
			a=a+temp;
			if(a%g>=g/2){
				a=(a/g+1)*g;
			}
			else{
				a=(a/g)*g;
			}
			cout << k*g-a << endl;
		}
}

int main() {


    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}