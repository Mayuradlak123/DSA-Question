#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){

    string s1,s2;

    cout << "Enter Substring : "<<endl;

    getline(cin, s2);

    cout <<"Enter string for indicas: "<<endl;

    cin>>s1;
    
    int i,len1=s1.size(),len2=s2.size();

   for(i=0;i<len2-len1+1;i++){

       if(s2.substr(i,len1)==s1){

           cout << "Found at index : "<<i<<endl;
          
       }
   }
   return 0;   
}
