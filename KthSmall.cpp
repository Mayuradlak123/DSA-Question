#include "bits/stdc++.h"
using namespace std;

class kthSmallestElement
{
public:
  int kthSmallest(int n,int k, int *arr)
  {
    priority_queue<int>pq;
    int i;
    for ( i = 0; i < n; i++){
      pq.push(arr[i]);
      if(pq.size()>k){ pq.pop();}
    }
    return pq.top();
  }
};
int main(int argc, char const *argv[])
{
  kthSmallestElement object;
  int i, n, k;
  cout << "Enter size of array : " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter element of array : " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter k: "<<endl;
cin>>k;
printf("Kth Smallest Element in Array : %d ",object.kthSmallest(n,k,arr));
  return 0;
}
