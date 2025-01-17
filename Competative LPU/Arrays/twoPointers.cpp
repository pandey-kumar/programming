
// you have been given a string and you have to tell the number of pairs ag is made

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="aabcgabgaax";

    int count=0;
    int pairs=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            count++;
        }else if(s[i]=='g'){
            pairs+=count;
        }
    }
    cout<<"Ans:- pairs:- "<<pairs;


}
