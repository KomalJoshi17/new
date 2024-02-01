#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int marks_array[5];
    // cin>>marks_array[0];
    // cin>>marks_array[1];
    // cin>>marks_array[2];
    // cin>>marks_array[3];
    // cin>>marks_array[4];

    // int avg;
    // avg = (marks_array[0] + marks_array[1] + marks_array[2] + marks_array[3] + marks_array[4]) / 5;
    // cout<<"The avg is "<<avg;

    // for(int i = 0; i < 5; i++) {
    //     cin>>marks_array[i];
    // }
    // int sum = 0;
    // for(int i = 0; i < 5; i++) {
    //     sum += marks_array[i];
    // }
    // cout<<sum/5;

    for(int i = 0; i < 5; i++) {
        cin>>marks_array[i];
    }
    // grace marking of 5 marks
    for(int i = 0; i < 5; i++) {
        marks_array[i] += 5;
        cout<<"for the "<<i + 1<<" student the new marks are "<<marks_array[i]<<endl;
    }
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += marks_array[i];
    }
    cout<<sum/5;
    return 0;
}