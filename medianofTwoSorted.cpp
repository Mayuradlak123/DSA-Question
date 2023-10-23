#include "cpp.h"
using namespace std;
int medianofSortedArray(int n,int m,int a1[],int a2[]){
    int i=0,j=0,k=0;
    int a3[n+m];
    while (i<=n){
        a3[k++]=a1[i++];
    }
    while (j<=m){
        a3[k++]=a2[j++];
    }
 bubbleSort(n+m,a3);
 for (i=0; i<n; i++){
    cout <<a3[i]<<" ";
 }
 int len =n+m;
   return len%2?(a3[len/2]):(a3[len/2]+a3[len/2-1])/2;
}
int main (){
    int i,j,n,m;
    cout << "Enter size of  a1 : "<<endl;
    cin>>n;

    cout << "Enter size of  a2 : "<<endl;
    cin>>m;

    int a1[n],a2[m];
    cout << "Enter element of a1 : "<<endl;
    for (i=0; i<n; i++){
        cin>>a1[i];
    }
    cout << "Enter element of a2 : "<<endl;
    for (j=0; j<m; j++){
        cin>>a2[i];
    }
  int ans= medianofSortedArray(n,m,a1,a2);
  cout << "Median of two sorted array : "<<ans<<endl;
return 0;
}