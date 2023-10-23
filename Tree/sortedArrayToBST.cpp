#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL, right = NULL;
    }
};
void solve(vector<int> &ans, vector<int> v, int s, int e)

{

    if (s > e)

    {

        return;
    }

    int mid = (s + e) / 2;

    ans.push_back(v[mid]);

    solve(ans, v, s, mid - 1);

    solve(ans, v, mid + 1, e);
}

vector<int> sortedArrayToBST(vector<int> &nums)
{

    vector<int> ans;

    solve(ans, nums, 0, nums.size() - 1);

    return ans;
}
int main  (){
     int n, i;
    cout << "Enter size of array :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}