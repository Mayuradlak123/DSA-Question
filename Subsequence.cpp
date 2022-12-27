#include "bits/stdc++.h"
using namespace std;
void strPattern(int i,int n,string ans,string str){
    if(i==n){
        cout <<ans<<" ";
    }
    else{
   strPattern(i+1,n,ans,str);
   ans+=str[i];
   strPattern(i+1,n,ans,str);
    }
}
int main (){
    string str;
    cout << "Enter String : "<<endl;
    cin>>str;
    strPattern(0,str.size(),"",str);
    return 0;
}