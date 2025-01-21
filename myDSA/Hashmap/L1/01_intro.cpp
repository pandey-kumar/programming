#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;
int main() {

    unordered_set<int>s;
    s.insert(5);
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(8);
    s.insert(2); // duplicate elements are not inserted 

    cout<<s.size()<<endl;

    s.erase(4);  // 4 will be deleted

    // Accessing the elements- using for each loop

    for(int ele: s){
        cout<<ele<<" ";
    }


    // generaly it follows down to top trend but stores in random order

    // 2. Checking for a target value in set

    int target=8;

    if(s.find(target) != s.end()){ // it means target is found
            cout<<"Exist";

    }else cout<<"Does not exist";

    // s.find() baiscally searches element in set and if not got it returns last element s.end();


        

    


    
} 