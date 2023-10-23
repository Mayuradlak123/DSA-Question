#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/permutations
void solve(int index, int n, vector<int> &num, vector<vector<int>> &ans)
{
    if (index == n)
    {
        ans.push_back(num);
        return;
    }
    for (int i = index; i < n; i++)
    {
        swap(num[i], num[index]);
        solve(index + 1, n, num, ans);
        swap(num[i], num[index]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();
    solve(0, n, nums, ans);
    return ans;
}
int main(int argc, char const *argv[])
{
    int i, n, temp;
    vector<int> nums;
    cout << "Enter  n: " << endl;
    cin >> n;
    cout << "Enter element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    vector<vector<int>> ans;
    ans = permute(nums);
    cout << "Permutations done: " << endl;
    for (auto x : ans)
    {
        cout << "[";
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << "] ,";
    }
    return 0;
}
