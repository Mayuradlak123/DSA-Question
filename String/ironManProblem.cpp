#include "bits/stdc++.h"
using namespace std;

bool saveIronman(string ch)
{
    // Complete the function
    string ans = "";
    int i;
    for (i = 0; i < ch.size(); i++)
    {
        if (isalnum(ch[i]))
        {
            ans += tolower(ch[i]);
        }
    }
    string rev = ans;
    reverse(ans.begin(), ans.end());
    return ans == rev;
}

int main(int argc, char const *argv[])
{
    string str;

    cout << "Enter string " << endl;
    cin >> str;

    if (saveIronman(str))
    {
        cout << "Ironman saved" << endl;
    }
    else
    {
        cout << "Ironman not saved" << endl;
    }
    return 0;
}
