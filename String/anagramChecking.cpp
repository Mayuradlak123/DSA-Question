#include "bits/stdc++.h"
using namespace std;
bool isAnagram(string a,string b){
   int i;
   if(a.size()!=b.size()){
    return false;
   }

   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   for  (i=0; i<a.size(); i++){
    if(a[i]!=b[i]){
    return false;
    
    }
   }
   return true;
}
int main (){
    string a,b;
    cout << "Enter a string : "<<endl;
    cin>>a;
    cout << "Enter b string : "<<endl;
    cin>>b;
    isAnagram(a,b)?cout << "String is Anagram :"<<endl :cout <<"Not Anagram "<<endl;
    return 0;
}