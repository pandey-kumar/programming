// count all the leader

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={16,17,4,3,5,2};
    int count=1;
    int maxc=arr[5];
    cout<<arr[5]<<" ";
    for(int i=4;i>=0;i--){
        if(maxc<arr[i]){
            cout<<arr[i]<<" ";
            count++;
            maxc=arr[i];
        }

    }
    cout<<"count:- "<<count;
    
}
