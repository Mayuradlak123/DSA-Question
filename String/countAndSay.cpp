#include "bits/stdc++.h"
using namespace std;
string countAndSay(string str){
    int i,j,count=0;
    string ans="";
     unordered_map<char,int>mp;
     for (i=0; i<str.length(); i++){
        mp[str[i]]++;
     }
     
    return ans;
}
int main (){
    string str;
    cout << "Enter an String : "<<endl;
    cin>>str;
string ans=countAndSay(str);
cout << "Counting of Each Charecter "<<ans<<endl;

return 0;
}