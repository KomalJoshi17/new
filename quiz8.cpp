#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // error 
    // int arr[4] = {1,3,5,7,9};

    // type from char to int (ascii)
    // int arr[4] = {1,3,'a',7};
    // cout<<arr[2];

    // int arr[4] = {1,3,'5',7};
    // cout<<arr[2];

    // error
    // int arr[4];
    // arr = {1,2,3,4};
     
    //  it will pass
    // int arr[4]= {1,2,3,4};
    // cout<<arr;

     // error d is string
    // int arr[4] = {1,2,3,"d"};

    int arr[5];
    cout<<arr[-1]<<endl;
    cout<<arr[10];
    // it will run
    return 0;
}