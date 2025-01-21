/* 
Given a string consisting of the small alphbets wihtout repeatations you have to print its all permutations, ordering doesnt matter

n! permutations

"abc" ->  abc,acb,bca,bac,cab,cba.alignas

 */

// brute force



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findPermutation(string &s, string ans){
    // base case
    if(s.size()==0) cout<<ans<<endl;

    // recursive case for all elements of string
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        string rem_s=left+right;
        findPermutation(rem_s,ans+ch);
    }


}

void optimisePermutation(string &s,int idx){
    // base case
    if(idx==s.size()-1){
        cout<<s<<endl;
        return;
    }

    unordered_set<char>st;
    for(int i=idx;i<s.size();i++){

        // 1. pruning step:-  which is not relevant dont call it

            if(st.find(s[i])!=st.end()) continue;
            st.insert(s[i]);

            swap(s[idx], s[i] );                                                            
            optimisePermutation(s,idx+1);
        //2 . backtracking undoing the changes already done
            swap(s[idx], s[i]);
        }
}

int main() {
    string s="aba";
    // findPermutation(s,"");
    optimisePermutation(s,0);
}
