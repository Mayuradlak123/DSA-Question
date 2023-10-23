#include "bits/stdc++.h"
using namespace std;

class countSubArray{
public:
int numberOfSubArray(int *arr,int n){
     int i,j,count=0;
     for (i=0; i<n; i++){
       for (j=i; j<n; j++) {
        count++;
       }
     }
     return count;
}
};
int main(int argc, char const *argv[])
{
    countSubArray object;
    int i,n;
    cout<<"Enter the size of array : "; cin>>n;
    int arr[n];
    cout << "Enter element of array: "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout << "Count of SubArray is : "<<object.numberOfSubArray(arr,n)<<endl;
    return 0;
}
