#include "bits/stdc++.h"
using namespace std;
void totalSub(string str){
    string temp=str;
    int count=0;
    reverse(str.begin(),str.end());
    if(str==temp){
        count++;
    }
}
void subSequence(string str,string ans,int i,int n){
   if(i==n){
   totalSub(ans);
   }
   else{
      subSequence(str,ans,i+1,n);
      ans+=str[i];
      subSequence(str,ans,i+1,n);
   }
}
int main (){
    string str;
    cout <<"Enter an string  : "<<endl;
    cin>>str;
   subSequence(str,"",0,str.length());
    return 0;
}