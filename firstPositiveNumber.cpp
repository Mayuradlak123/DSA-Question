#include "bits/stdc++.h"
using namespace std;
// Leetcode: https://leetcode.com/problems/first-missing-positive/description/
int firstMissingPositive(vector<int> &nums)
{
    unordered_set<int> st;
    for (auto x : nums)
    {
        st.insert(x);
    }
    for (int i = 1;; i++)
    {
        if (st.find(i) == st.end())
        {
            return i;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int i, n, temp;
    cout << "Enter n :" << endl;
    cin >> n;
    vector<int> arr;
    cout << "Enter Element of array :" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "First Missing Positive Number : " << firstMissingPositive(arr) << endl;
    return 0;
}
