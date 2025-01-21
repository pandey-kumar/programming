// N- no of nodes in bst nodes are numbered from 1 to n count the number of BST that can be formed with n nodes;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bst(int n){
    if(n==0) return 1;
    int ans=0;
    for(int i=1;i<=n;i++){
        int a=bst(i-1);
        int b=bst(n-i);
        ans+=a*b;
    }
    return ans;

}
int main() {
    int ans=bst(4);
    cout<<ans;
    
}
