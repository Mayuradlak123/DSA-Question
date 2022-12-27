#include <bits/stdc++.h>
using namespace std;
string wipro_Question(string str){
    string result="";
    set<char> s;
    int i=0,n=str.length();
    for (i=0; i<n; i++){
        s.insert(str[i]);
    }
    for (auto val:s){
        result+=val;
    }

    return result;
}
int main(){ 
    string str;
    cout  << "Enter string for Upper case: "<<endl;
    getline(cin,str);

    cout << "Remove All Redundancy : "<<wipro_Question(str)<<endl;
   return 0;
}