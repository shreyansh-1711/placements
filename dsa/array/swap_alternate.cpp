#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlter(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }   
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    swapAlter(arr, n);
    printArray(arr,n);
    return 0;
}