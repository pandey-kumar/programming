// Product of array except self  // leet 238

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    // best optimal approach

    int arr[]={1,2,3,4};
    int n=4;

    vector<int>pPro(n);
    int p=arr[0];
    pPro[0]=1;

    // prefix product except itself

    for(int i=1;i<n;i++){
        pPro[i]=p;
        p*=arr[i];
    }

    // suffix product except self

    p=arr[n-1];
    for(int i=n-2;i>=0;i--){
        pPro[i]*=p;
        p*=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<pPro[i]<<" ";   // 24 , 12 , 8 , 6
    }

    
}
