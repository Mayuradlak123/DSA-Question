#include "bits/stdc++.h"
using namespace std;
string is_Present(string str1,string str2){
    
    int i,n=str1.size();
    
    int  flag=1;
    
      for(i=0;i<n-str2.size();i++){
          
          if(str1.substr(i,str2.size())==str2){
              
              flag=1;
              break;
          }
          
          else{
              flag=0;
          }
      }
      
      if(flag==0){
          return "no";
      }
      else{
          return "yes";
      }
}
int main(){
    string str1,str2;
    
    cout << "Enter an String : "<<endl;
    
    cin>>str1;
    
    cout << "Enter an String for check : "<<endl;
    
    cin>>str2;
    
    cout <<is_Present(str1,str2)<<endl;
    
    return 0;
}