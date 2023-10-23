#include "bits/stdc++.h"
using namespace std;
// Leetcode  : https://leetcode.com/problems/longest-common-prefix/
/*
 sort(s.begin(), s.end());
  string start = s[0], end = s[n - 1];
  string ans = "";
  int i, j;
  for (i = 0; i < s.size(); i++)
  {
    if (start[i] == end[i])
    {
      ans += start[i];
    }
  }
  return ans;
*/
string commonPrefix(vector<string> v, int n)
{
   string ans="";
        sort (v.begin(),v.end());
        string start=v[0],end=v[v.size()-1];

        for (int i=0; i<start.size(); i++){
           while(start[i]==end[i]){
               ans+=start[i];
               i++;
           }
           break;
        }
        return ans;
}
int main()
{
  vector<string> v;
  int i, n;
  string temp;
  cout << "Enter size of array : " << endl;
  cin >> n;
  cout << "Enter word for find comman prefix:" << endl;
  for (i = 0; i < n; i++)
  {
    cin >> temp;
    v.push_back(temp);
  }
  cout << "common Prefix in given array is :" << commonPrefix(v, n) << endl;
  return 0;
}