#include <bits/stdc++.h>
using  namespace std;
string countSay(string s){
      string ans="";
      map<char,int> mp;
      int i;
      for (i=0; i<s.size(); i++){
        mp[s[i]]++;
      }
      for (auto j:mp){
        ans+=j.first;
        ans+=to_string(j.second);
        ans+=" ";
      }
      return ans;
}
 int main(){
    string str;
    cout << "Enter an String "<<endl;
    getline(cin,str);
    cout << "Count and say : "<<countSay(str)<<endl;
    return 0;
 }