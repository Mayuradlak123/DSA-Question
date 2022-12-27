#include "bits/stdc++.h"
using namespace std;
int minIndexChar(string text,string pattern){
     map<char,int> mp;
     int i,j;
     for(i=0;i<pattern.length();i++){
        mp[pattern[i]]++;
     }
     for(j=0;j<text.length();j++){
        if(mp.find(text[j])!=mp.end()){
            return j;
        }
     }
     return -1;
}
int main(){
    string pattern,text;
    cout << "Enter Text : "<<endl;
    getline(cin,text);
    cout << "Enter pattern : "<<endl;
    cin>>pattern;
    int ans=minIndexChar(text,pattern);
    cout << "Minimum index is: "<<ans<<endl;
    return 0;
}