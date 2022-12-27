#include "bits/stdc++.h"
using namespace std;
string isPresent(string str1,string str2){

    int n=str1.size();
   int i,j=0;
   // i'M CHEKING ONE string IS PRESENT TO ANOTHER STRING OR NOT 
//   /This is Virusta Coding Round Question
   for(i=0;i<n;i++){ 

    if(str1.substr(i,str2.size())==str2){
        j=1;
        break;
    }
    else{
        // return "No";
        j=0;
    }
   }
   if(j==1){
       return "Yes";
       
   }
   else{
       return "No";
   }
}
int main(){
    string str1, str2;
   
    cout << "Enter any two String : "<<endl;
   
    getline(cin,str1);
   
    cin>>str2;
 cout <<isPresent(str1,str2)<<endl;
 return 0; 
}