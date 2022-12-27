#include "bits/stdc++.h"
using namespace std;
string remove_char(string str){
    int i,n;
    string ans="";
    sort(str.begin(),str.end());
    n=str.size();
    for(i=0;i<n;i++){
        if(str[i]!=str[i+1]){
            ans+=str[i];
        }
    }
    return ans;
}
int main(){
     
     string str;
    cout <<"Enter an String : "<<endl;
    cin>>str;
    cout <<remove_char(str)<<endl;
    return 0;
}