#include<bits/stdc++.h>
using namespace std;

int maxSub_str(string str,int n){
    
     int count0=0,count1=0,count=0;
     
     for(int i=0;i<n;i++){

         if(str[i]=='0'){
             count0++;
         }
         else{
             count1++;
         }
        if(count1==count0){
            count++;
        }
     }
     if(count0!=count1){
         return -1;
     }
     return count;
}
int main(){
    
    string s;
    
    cout<<"Enter an String : "<<endl;
    
    cin>>s;
    
    int n=s.size();
    
    cout  <<maxSub_str(s,n)<<endl;
    
    return 0;
}