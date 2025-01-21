// Generate all the valid parenthesis given n 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find(string str,int n,int o,int c){
    // base case
    if(str.size()==2*n){
        cout<<str<<" ";
        return;
    }
    // recursive case
    if(o<n){
        find(str+='(',n,o+1,c);
    }
    if(c<o){
        find(str+=')',n,o,c+1);
    }

}
int main() {
    find("",3,0,0);
}
