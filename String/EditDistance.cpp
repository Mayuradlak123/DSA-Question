#include "bits/stdc++.h"
using namespace std;
int editDistance(string str1, string str2)
{
    if (str1 == str2)
    {
        return 0;
    }
    int n = 0;
    // Wrong Solution 
    for (int i = 0; i < str1.length(); i++)
    {
        if (!str2.find(str1[i]))
        {
            n++;
        }
    }
    return n;
}
int main()
{
    string str1, str2;
    cout << "Enter first string : " << endl;
    cin >> str1;
    cout << "Enter Second string : " << endl;
    cin >> str2;
    int ans = editDistance(str1, str2);
    printf("%d Number of Operation Required : ", ans);
    return 0;
}