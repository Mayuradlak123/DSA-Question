#include "bits/stdc++.h"
using namespace std;
void printstring(string s, int start, int end){
     for(int i=start;i<=end;i++){
         cout<<s[i];
     }
 }
   void longest_Palindrom(string s) {
       int l,h;
       int start=0, end=1;
       for(int i =1;i<s.length();i++){
           //for even string
           l=i-1;
           h=i;
           while(l>=0 && h<s.length() && s[l]==s[h]){
               if(h-l+1>end){
                   end=h-l+1;
                   start=l;
               }
               l--;
               h++;
           }
           // for odd string
           l=i-1;
           h=i+1;
           while(l>=0 && h<s.length() && s[l]==s[h]){
               if(h-l+1>end){
                   end=h-l+1;
                   start=l;
               }
               l--;     
                             h++;
           }
       }
       printstring( s,start,start+end-1);
   }
   int main(){
string str;
//Taking String 
cin>>str;
longest_Palindrom(str);
return 0;
}