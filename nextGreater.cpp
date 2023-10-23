#include "bits/stdc++.h"

using namespace std;

class Stack
{
public:
    vector<int> nextGreater(int *arr, int n)
    {
        int i, j;
        vector<int> ans;
        bool f = 0;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j <n; j++)
            {
                if (arr[i] < arr[j])
                {
                    ans.push_back(arr[j]);
                    f=1;
                }
                else
                {
                    if (j == n-1 and f==0)
                    {
                        ans.push_back(-1);
                    }
                }
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
int main()
{
    Stack object;
    int i, n;

    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = object.nextGreater(arr, n);
    cout << "Next Greater Element : " << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
