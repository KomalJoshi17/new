#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // give memory address
    // int arr[5];
    // cout<<arr;

    int arr[5];
    // address of index 0
    cout<<(arr + 0)<<endl;
    // address of index 1
    cout<<(arr + 1)<<endl;
    // address of the index 2
    cout<<(arr + 2)<<endl;
    // address of the index 3
    cout<<(arr + 3)<<endl;

    // random access of any index value
     // print value at index 2
    cout<<arr[2]<<endl;
    cout<<*(arr + 2)<<endl;
    // above one read the address and gives the value -> pointers 
    
    cout<<2[arr]<<endl;
    cout<<*(2 + arr)<<endl;
    return 0;
}