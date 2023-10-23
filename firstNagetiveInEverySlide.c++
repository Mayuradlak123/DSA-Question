#include "bits/stdc++.h"
using namespace std;
vector<int> firstNagetive(int n, int *arr, int k)
{
    int i, j;
    vector<int> v;
    int temp,ans;
    for (i = 0; i < n-1; i++)
    {
        for (j = i; j < i+k; j++)
        {
            temp=arr[j];
            ans=min(temp,ans);
           
        }    v.push_back(ans);
    ans=0;
    cout <<ans<<" "; 
    }
    return v;
    cout <<endl;
}
int main()
{
    int i, n, k;
    cout << "Enter n: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter arr Element: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter size of slide : " << endl;
    cin >> k;

    vector<int> ans = firstNagetive(n, arr, k);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}