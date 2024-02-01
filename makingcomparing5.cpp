#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int ar[5] = {1,2,4,5,6};
    // int br[5] = {1,2,4,5,6};
    // // will give different because addresses are compared
    // if(ar == br) {
    //     cout<<"Both arrays are same"<<endl;
    // }else {
    //     cout<<"Both arrays are different"<<endl;
    // }

    // int ar[5] = {1,2,4,5,6};
    // // cant do this to initailise br with ar
    // br = ar;

    int ar[5] = {1,2,4,5,6};
    int br[5];
    for(int i = 0; i < 5; i++) {
        br[i] = ar[i];
    }
    cout<<ar[5]<<endl<<br[5];    
    return 0;
}