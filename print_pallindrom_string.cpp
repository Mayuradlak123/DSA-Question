#include "bits/stdc++.h"
using namespace std;
set<string> print_pallindrom(string str,int n,string t,int i){
    if(i==n){
        string rev=t;
        set<string>s;
        reverse(t.begin(),t.end());
        if(t==rev && t.length()>1){
            cout <<t<<" ";
            s.insert(t);
        }
        return s;
    }
    else{
        print_pallindrom(str,n,t,i+1);
        t=t+str[i];
        print_pallindrom(str,n,t,i+1);
    }
    
}
int main(){
    string str;
    set<string>s;
    cout << "Enter an String : "<<endl;
    cin>>str;

   s= print_pallindrom(str,str.size(),"",0);
   for(auto val:s){
    cout <<val<<" ";
   }
    return 0;
}