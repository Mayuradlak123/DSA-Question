#include "bits/stdc++.h"

using namespace std;
// Leetcode : https://leetcode.com/problems/maximum-subarray
int KadansAlgo(int n, int arr[])
{
    int temp = 0, i, ans = INT_MIN;
    for (i = 0; i < n; i++)
    {
        temp+=arr[i];
        ans=max(ans,temp);
        if(temp<0){
            temp=0;
        }
    }
    return ans;
}
int main()
{
    int i, n;
    cout << "Enter l of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Element of array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum sum of subarray : " << KadansAlgo(n, arr);
    return 0;
}