#include "bits/stdc++.h"
using namespace std;
//  Leetcode : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

int getIndex(string s1, string s2)
{
    int i, n = s2.size();
    for (i = 0; i < s1.size(); i++)
    {
        if (s1.substr(i, n) == s2)
        {
            return i;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    string s1, s2;

    cout << "Enter a string  1: " << endl;
    cin >> s1;

    cout << "Enter a string 2: " << endl;
    cin >> s2;

    cout << "s2 match found at index :" << getIndex(s1, s2) << endl;
    return 0;
}
