#include "bits/stdc++.h"
using namespace std;
int secondLargest(int n, int *arr)
{
    int maxArr=0, i, ans = 0;
     if(n==0) return -1;
     if(n==1) return arr[0];
     for (i=0; i<n; i++){
        maxArr=max(arr[i],maxArr);
     }
     for (i=0; i<n; i++){
        if(maxArr==arr[i]) continue;
        else ans=max(ans,arr[i]);
     }
    return ans;
}
int main()
{
    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter arr element :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printf("Second Largest element in array : %d ", secondLargest(n, arr));
    return 0;
}