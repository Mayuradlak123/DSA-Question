#include <bits/stdc++.h>
using namespace std;
void pallindrom(string str)
{
    int i,j,n=str.size(),count=0;
    vector<string >v;
    string s;
    for (i=0;i<n;i++){
        s="";
        while(str[i]!=' ' and i<n){
           s+= str[i];
           i++;
        }
        v.push_back(s);
    }
    for (auto val:v){
        string rev= val;
       reverse(val.begin(), val.end());
       if(rev==val){
        count++;
        cout <<val<<" ";
       }
    }
cout <<"Number of pallindromic String : "<<count<<endl;
  
}
int main()
{
    string str;
    cout << "Enter an string sentence: " << endl;
    getline(cin, str);
    
    pallindrom(str);
    return 0;
}