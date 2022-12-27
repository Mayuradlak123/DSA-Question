#include "bits/stdc++.h"
using namespace std;

int main(){
    cout << "Let's Understand Map and Explore it : "<<endl;
    unordered_map<char,int> mp; //
    // Unordered Map is Storing key value pair in Reverse Order 
    // And Map is Storing key value pair in Queue form 
    string str;
    cout << "Enter value of string : "<<endl;
    getline(cin,str);
    int i;
    cout << "Understand Concept of Map : "<<endl;
    for (i=0; i<str.size(); i++){
        mp[str[i]]++;
    }
    for (auto val:mp){
        cout <<"First :"<<val.first<<"Second: "<<val.second<<endl;
    }
    return 0;
}