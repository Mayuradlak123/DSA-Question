#include "bits/stdc++.h"
using namespace std;
bool checkSubsequence(string a,string b){
   int i,j=0;
   for (i=0; i<b.size(); i++){
    if(a[j]==b[i]){
        j++;
    }
   }
   if(j==a.length()){
    return true;
   }
   return false;
}
int main (){
    string a,b;
    cout << "Enter a: "<<endl;
    cin>>a;
    cout << "Enter b "<<endl;
    cin>>b;
    checkSubsequence(a,b)?cout << "A is Subsequence of b: ":cout << "Not Subsequence: "<<endl;
    return 0;
}