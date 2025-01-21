// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void bs(vector<int>&v,int idx){
//     if(idx==v.size()-1) return;
    
//     if(v[idx]>v[idx+1]) swap(v[idx],v[idx+1]);
//     return bs(v,idx+1);
// }

// int main() {
//     vector<int>v={5,4,3,2,1};
//     bs(v,0);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bs(vector<int>&v,int idx,int n){
    if(n==1) return;
    if(idx==n-1){
        bs(v,idx,n-1);
        return;
    }

    if(v[idx]>v[idx+1]) swap(v[idx],v[idx+1]);
    return bs(v,idx+1,n);
}

int main() {
    vector<int>v={5,4,3,2,1};
    bs(v,0,5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
