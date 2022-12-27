#include "bits/stdc++.h"
using namespace std;

int main( ){
    int n,i,start,end;

    cout <<"Enter Size of array : "<<endl;

    cin>>n;
    
    cout << "ENter Element of array : "<<endl;

  int arr[n];

    for (i=0; i<n ;i++){
        cin>>arr[i];
    }
    cout << "Subarray of all element : "<<endl;
    for(start=0; start<n; start++){
        for (end=0; end<n; end++){
            for (i=start; i<=end; i++){
                cout <<arr[i]<<" ";
            }
            cout <<endl;
        }
        
    }
    return 0;
}