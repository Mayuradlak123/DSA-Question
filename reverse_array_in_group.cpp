// C++ program to reverse every sub-array formed by
// consecutive k elements
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n, int k)
{
    int i;
	for ( i = 0; i < n; i += k)
	{
		int start = i;

		// to handle case when k is not multiple of n
		int end = min(i + k - 1, n - 1);

		// reverse the sub-array [left, right]
		while (start < end)
			swap(arr[start++], arr[end--]);

	}
}

// Driver code
int main()
{
	int i,n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	for ( i = 0; i < n; i++)
		cin >> arr[i] ;
     reverse(arr,n,k);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
