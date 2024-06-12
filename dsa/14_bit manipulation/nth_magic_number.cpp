#include <iostream>
using namespace std;

int nMagic(int n)
{
	int pow=1, ans=0;
    while(n){
        pow=pow*5;
        if(n&1){
            ans+=pow;
        }
        n=n>>1;
    }
    return ans;
}

// Driver Method
int main(void)
{
	int n;
    cin>>n;
    cout << nMagic(n) << endl;
    return 0;
}

