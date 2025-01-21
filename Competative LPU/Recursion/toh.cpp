#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void toh(int n,string a,string b,string c){
    if(n==0) return;
    toh(n-1,a,c,b);
    cout<<"move "<<n<<" from "<<a<<" -> "<<c<<endl;
    toh(n-1,b,a,c);

}
int main() {
    toh(3,"a","b","c");
}
