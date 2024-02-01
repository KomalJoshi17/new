#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int a,b;
    // a=10;
    // b=20;
    // int temp=a;
    // a=b;
    // b=temp;
    // cout<<a<<endl<<b;

// does not swap by same logic
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for (int i=0;i<n;i++){
    //     int temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

// n=n/2 possible
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}