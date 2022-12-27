#include<bits/stdc++.h>
using namespace std;
string moveDuplicate(string str){
     int n=str.size(),i;
     string ans="";
     set<char>S;
     for (i=0; i<n; i++){
        if(S.find(str[i])==S.end()){
            S.insert(str[i]);
            ans+=str[i];
        }
     }
     return ans;
}
int main(){
    string str;
    cout << "Enter String : "<<endl;
    getline(cin,str);
    string ans=moveDuplicate(str);
    cout << "After Remove duplicate : "<<ans<<endl;
    return 0;
 }