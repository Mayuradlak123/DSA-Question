#include "bits/stdc++.h"
using namespace std;
vector<int> pattern_Searching(string text,string pattern){
    int i,n,m;
    vector<int>v;
    n=text.length();
    m=pattern.length();
    for (i=0;i<n;i++){
        if(text.substr(i,m)==pattern){
        v.push_back(i);
        }
    }
    if(v.size()==0){
      v.push_back(-1);
    }
    return v;












   /* n=text.length();
    
    m=pattern.length();

    vector<int>v;
    
    for (i=1; i<=n; i++){
        if(text.substr(i,m)==pattern){
         v.push_back(i);
        }
    }
    if(v.size()==0){
        v.push_back(-1);
    }
    cout <<"Pattern find this all Index's"<<endl;

    for (auto val:v){
        cout <<val<<" ";
    }*/
}
int main(){

    string pattern,text;
    cout << "Enter text for searching pattern : "<<endl;
    
    getline(cin,text);
    cout << "Enter Pattern for search : "<<endl;
    
    cin>>pattern;
    cout << "Pattern find at Index: "<<endl;
    vector<int> v= pattern_Searching(text,pattern);
    for (auto val: v){
        cout <<val<<" ";
    }
    return 0;

}