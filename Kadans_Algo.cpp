#include "bits/stdc++.h"
using namespace std;
int maxSum(int n,int arr[]){

    int i,ans=INT_MIN,sum=0;
    for (i=0; i<n; i++){
        sum+=arr[i];
        ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
    }
   return sum;
}
int main(){
    int n,i;
    cout << "Enter size of array : "<<endl;
    cin>>n;

    int arr[n];
    cout <<"Enter Element of array : "<<endl;
    
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout <<"Maximum sum in Subarray: "<<maxSum(n,arr)<<endl;
    return 0;
}