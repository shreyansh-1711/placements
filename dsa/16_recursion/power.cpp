// #include<bits/stdc++.h>
// using namespace std;


// int power(int n){
//     if(n==0) return 1;
   
//     return n*power(n-1);

// }


// int main()
// {
//     int n;
//     cin >> n;
//     int ans =  power(n);
//     cout << ans << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;

    int ans = power(a,b/2);
    if(b%2==0) return ans*ans;
    else{
        return a*ans*ans;
    }
}

int main()
{
   int a,b;
   cin>>a>>b;
   int ans = power(a,b);
   cout<<ans<<endl;
    return 0;
}
