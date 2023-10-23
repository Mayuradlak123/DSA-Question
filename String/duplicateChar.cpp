#include "bits/stdc++.h" 
using namespace std;
string findDuplicate(string str){
   unordered_map<char,int>mp;
   for (int i=0; i<str.length(); i++){
    mp[str[i]]++;
   }
   string ans="";
   for (auto x:mp){
    if(x.second>=2){
      ans+=x.first;
    }
   }
   return ans;
}
int main (){
    string str;
    cout << "Enter an String : "<<endl;
    cin>>str;
    string ans=findDuplicate(str);
    cout <<"Repeating charecter in string : "<<ans<<endl;
    return 0;
}