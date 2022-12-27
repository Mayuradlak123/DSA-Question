#include <bits/stdc++.h>
#include <string>
using namespace std;
bool isIsogram(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;

        if (mp[s[i]] > 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter an String : " << endl;
    cin >> str;
    if (isIsogram(str))
    {
        cout << "Is Isogram String : " << endl;
    }
    else
    {
        cout << "Not Isogram: " << endl;
    }
}