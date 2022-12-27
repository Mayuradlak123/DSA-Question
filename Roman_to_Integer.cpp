#include "bits/stdc++.h"
using namespace std;

int roman_to_Integer(string str){

unordered_map <char,int> table ={

     {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

       int i,len = str.size();

       int ans = table[str[len-1]];

      for(i=len-2;i>=0;i--)
      {
          if(table[str[i]]<table[str[i+1]])
                  {
                      ans= ans-table[str[i]];
                  }
          else
                 {
                     ans = ans+table[str[i]];
                 }
      }
       return ans;
   } 
   
int main(){

    string str;

    cout <<"Enter Roman : "<<endl;

    cin>>str;
   
   cout<<"Integer Number of Roman : "<< roman_to_Integer(str)<<endl;

   return 0;

}