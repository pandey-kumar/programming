#include<iostream>
#include<set>
#include<map>
using namespace std;
int main() {
    // ordered set

    set<int>s;
    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(3);

    // it takes O(logn) for the diffrent purposes 
    for(auto x: s){
        cout<<x<<" "; // 3 20 30  // sorted
    }

    // Lets look ordered map 
    // it also sorts the things in the lexographical order for strings and number ascending order for values on basis of ( KEYS )

    map<int,int>mp;
    mp[4]=20;
    mp[1]=10;
    mp[3]=50;
    mp[2]=70;
    cout<<endl;
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<" ";
    }

    // its sorted on the basis of the numbers ascending order ac to keys only

    // lets try with strings 

    map<string,int>mp2;
    mp2["shubham"]=23;
    mp2["anup"]=3;
    mp2["harsh"]=13;
    cout<<endl;
    for(auto it:mp2){
        cout<<it.first<<"->"<<it.second<<" ";
    }

    // its in lexographical order ac to the keys
}
