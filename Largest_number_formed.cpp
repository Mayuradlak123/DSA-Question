#include "bits/stdc++.h"
using namespace std;
string Largest_formed(vector<string> arr, int n)
{
    string s = "";
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    sort(s.begin(), s.end());
    return s;
}
int main()
{
    int n, i;
    string str;
    vector<string> v;
    cout << "Enter Length of array :" << endl;
    cin >> n;
    cout << "Enter Element of string : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }
    cout << "Largest form of all Element : " << Largest_formed(v, n) << endl;
    return 0;
}