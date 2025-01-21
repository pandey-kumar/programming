#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    // Lets understand pair first

    // its a simple stl in cpp

    pair<string,int>p1;
    p1.first="shubham";
    p1.second=23;

    cout<<p1.first<<"->"<<p1.second<<endl;

    // it is like a class which can hold any type of two data types linked with each other

    // insertion in map

    unordered_map<string,int>mp;

    mp.insert(p1);

    // we cant insert key value pairs directly like this
    // mp.insert("anup",23);

    // but we can use this easy way 

    mp["anup"]=34;
    mp["lokesh"]=14;
    mp["vignesh"]=12;

    // looping in the map

    for(pair<string,int> p : mp){
        cout<<p.first<<" -> "<<p.second<<endl;
    }

    // the best way is using the auto keyword

    for(auto items: mp){
        cout<<items.first <<" ---> "<<items.second<<endl;
    }
}
