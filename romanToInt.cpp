#include "bits/stdc++.h"
using namespace std;
// Leetcode: https://leetcode.com/problems/roman-to-integer/
class romanToInt
{
public:
    int getNumberByroamn(string s)
    {
        int ans = 0;
        unordered_map<char, int> mp{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] < mp[s[i + 1]])
            {

                ans = ans - mp[s[i]];
            }
            else
            {
                ans = ans + mp[s[i]];
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    romanToInt object;
    string str;
    cout <<"Enter any roman digit : "<<endl;
    cin>>str;
    cout <<"Integer number: "<<object.getNumberByroamn(str)<<endl;
    
    return 0;
}
