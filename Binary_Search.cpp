#include <bits/stdc++.h>
using namespace std;
int binary_Search(int n, int k, int a[])
{
    int i,start=0,end=n;
    while(start<=end){

        int mid=end-start/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
            end=mid-1;
        }
        else if (a[mid]<k){
            start=mid+1;
        }

    }
 /*   int start = 0, i;
    int end = n - 1;
    while(start<=end){
        int mid=end-start/2;
        if(a[mid]==k){
            return mid;
        }
        else if(k>a[mid]){
        start=mid+1;
        }
        else if(k<a[mid]){
            end=mid-1;
        }
    }*/
    return 0;
    }
int main()
{
    int n, i, k;
    cout << "Enter size of  array  : " << endl;
    cin >> n;

    int a[n];

    cout << "Enter element of array in sorted manner " << endl;

    for (i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    cout << "Enter Element for Search : " << endl;
    cin >> k;
    int index=binary_Search(n,k,a);
    if(index){
        cout <<"Element found at Index "<<index<<endl;
    }
    else{
        cout << "Element not Found : "<<endl;
    }
    return 0;
}