#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int odd_arr[n];
    int even_arr[n];
    int j=0,k=0;
    if(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_arr[j]==arr[i];
            j++;
        }else{
            odd_arr[k]==arr[i];
            k++;
        }
    }
    for(int i=0;i<j;i++){
        cout<<even_arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<k;i++){
        cout<<odd_arr[i]<<" ";
    }
    return 0;
}