#include "bits/stdc++.h"
using namespace std;
int Atoi(string str){
   int ans=0;
   for (auto x:str){
    ans=ans*10+x-'0';
   }
   return ans;
}
int main (){
    string str;
    cout << "Enter Number Digit : "<<endl;
    cin>>str;
printf("after Implement Atoi is : %d ",Atoi(str));
    return 0;
}