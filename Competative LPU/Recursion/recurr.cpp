#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    void inc(int n){
        if(n==0) return ;
        cout<<n<<" ";
        return inc(n-1);
    }
int main() {

    inc(5);
}
