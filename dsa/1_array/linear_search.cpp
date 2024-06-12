#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int key){
     for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
     } 
     return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int tar ;
    cin>>tar;
    bool found = search(arr,n,tar);
    if(found){
        cout<<"Found";
    }
    else{
            cout<<"Not Found";
        }

    return 0;
}