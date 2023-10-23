#include "bits/stdc++.h"
using namespace std;
int kthElement(int n,int m,int *arr1,int *arr2,int x){
    int arr3[n+m];
    int i=0,j=0,k=0;
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
//    bubbleSort(n+m,arr3);
 priority_queue<int>p;
 for (i=0; i<n+m; i++){
    p.push(arr3[i]);
    if(p.size()>x){
        p.pop();
    }
 }
 return p.top();
}
int main()
{
    int i, j, n, m,x;
    cout << "Enter n : " << endl;
    cin >> n;
    cout << "Enter m : " << endl;
    cin >> m;
    cout << "Enter element of a1 : " << endl;
    int arr1[n], arr2[m];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter element of ar2 : " << endl;
    for (j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    cout << "Enter value of k:"<<endl;
    cin>>x;
    printf(" Kth element in two sorted array is : %d ",kthElement(n,m,arr1,arr2,x));
    return 0;
}
