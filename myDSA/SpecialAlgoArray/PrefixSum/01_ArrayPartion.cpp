#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={6,5,3,2,2,2,2};
    // psum=  [1,4,8,11,13,14,16]
    int sz=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<sz;i++){
        arr[i]=arr[i-1]+arr[i];
    }

    for(int i=0;i<sz;i++){
        if(2*arr[i]==arr[sz-1]){
            cout<<"Yes! got it"<<endl;
            cout<<"From "<<"0 to "<<i<<" and "<<i+1<<" to "<<sz-1<<endl; 
            return 0;
        }
    }
    cout<<"No! Not got";


}
