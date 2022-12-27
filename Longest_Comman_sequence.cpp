#include <bits/stdc++.h>
using namespace std;
int commanSubsequence(string s1,string s2,string s3){
     int i,j,n=s1.length(),m=s2.length(),p=s3.length();
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
     vector<int> v;
    
   cout <<endl;
     return s.size();
}
int main (){
    string s1,s2,s3;
    cout << "Enter first String : "<<endl;
    getline(cin,s1);
    cout << "Enter Second  String : "<<endl;
    getline(cin,s1);
    cout << "Enter Third String : "<<endl;
    getline(cin,s1);

int ans=commanSubsequence(s1,s2,s3);
   cout << "Longest Comman Subsequece of Given Both String  Length is : "<<ans<<endl;
  return 0;
}