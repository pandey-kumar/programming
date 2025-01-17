// Range sum query 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();

    vector<int>csum(n,0);
    csum[0]=arr[0];
    for(int i=1;i<n;i++){
        csum[i]=csum[i-1]+arr[i];
    }


    // queries
    int sum =0;
    vector<pair<int,int>>queries={{1,3},{2,4},{0,4}};
    for(auto query:queries){
        int L=query.first;
        int R=query.second;
        if(L==0) sum=csum[R];
        else sum=csum[R]-csum[L-1];

        cout<<sum<<endl;
    }
}


//T.c---- O(N+Q)
// s.c----O(N)
