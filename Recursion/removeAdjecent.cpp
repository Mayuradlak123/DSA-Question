#include "bits/stdc++.h"
using namespace std;
string adjRemove(string s)
{
     int i=0;
     string ans;
     while(i<s.size()){
        if(s[i]!=s[i+1] and s[i]!=s[i-1]){
            ans+=s[i];
        }
        i++;
     }
     if(ans.size()==s.size()){
        return ans;
     }

     return adjRemove(ans);
}
int main()
{
    string str;
    cout << "Enter string : " << endl;
    cin >> str;
    cout << "after Remove Adjecent character: " << adjRemove(str) << endl;
    return 0;
}
/*
 string ans;
    int i = 0;
    while (i<s.size())
    {
        if (s[i] != s[i + 1] and s[i] != s[i - 1])
        {
            ans += s[i];
        }
        i++;
    }
    if (ans.size() == s.size())
    {
        return ans;
    }
    return adjRemove(ans);
*/