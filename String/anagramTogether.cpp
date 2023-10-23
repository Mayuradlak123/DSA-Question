#include "bits/stdc++.h"
using namespace std;
// Print word in group which contain same charecter
// Leetcode : https://leetcode.com/problems/group-anagrams
void isAnagram(vector<string> v, int n)
{
   int i;
   map<string, vector<string>> mp;

  
   for (i = 0; i < n; i++)
   {
      string t = v[i];
      sort(t.begin(), t.end());
      mp[t].push_back(v[i]);
   }
   for (auto x : mp)
   {
      for (auto y : x.second)
      {
         cout << y << " ";
      }
      cout << endl;
   }
}
int main()
{
   int n, i;
   string t;
   cout << "Enter n: " << endl;
   cin >> n;
   vector<string> s;
   cout << "Enter element of vector : " << endl;
   for (i = 0; i < n; i++)
   {
      cin >> t;
      s.push_back(t);
   }
   isAnagram(s, n);

   return 0;
}