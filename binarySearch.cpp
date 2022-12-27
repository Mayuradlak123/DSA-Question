#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int k){
    int i;
    int start=0,end=n-1;
   while(start<=end){
    int mid=end-start/2;
    if(a[mid]==k){
        return mid;
    }
    else if(a[mid]>k){
        end=mid-1;
    }
    else if(a[mid]<k){
        start=mid+1;
    }
   }
   return -1;
}
int main(){
    int i,n,k;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    int a[n];
    cout << "Enter Element of array in sorted order : "<<endl;
    for (i=0; i<n; i++){
        cin>>a[i];
    }
    cout << "Enter value of k : "<<endl;
    cin>>k;
    int ans=binarySearch(a,n,k);
    if(ans<0){
        cout <<"Element not Present in array"<<endl;
        }
        else{
    cout << "Element found at Index no. :"<<ans<<endl;
        }
    return 0;
}