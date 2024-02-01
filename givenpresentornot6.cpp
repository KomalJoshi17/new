#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int target;
    cin>>target;
    int flag = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout<<"Target element is present"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        cout<<"Target element is not present"<<endl;
    }
    return 0;
}