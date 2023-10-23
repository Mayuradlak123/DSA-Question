#include "bits/stdc++.h"
using namespace std;
int binarySearch(int n, int x, int *arr)
{
    int start =0,end=n;
    int mid=(start+end)/2;
   while(start<=end) {
    mid=(start+end)/2;
      if(arr[mid]==x){
        return mid;
      } 
      else if(arr[mid]>x){
       end=mid-1;
      }
      else  if(arr[mid]<x){
        start=mid+1;
      }
   }
    return -1;
}

int main()
{
    int i, start, end, mid, n, x;
    cout << "Enter n :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element for search: " << endl;
    cin >> x;
    printf("x is found at Index Number : %d ", binarySearch(n, x, arr));
    return 0;
}