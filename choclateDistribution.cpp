#include "bits/stdc++.h"
using namespace std;
/*
N = 8, M = 5
A = {3, 4, 1, 9, 56, 7, 9, 12}
Output: 6
Time Complexity : O(nlogn)
*/
int minDiff(int n,int m,int a[]){
    int ans=INT_MAX;

sort(a,a+n);
    for(int i=0;i<n-m+1;i++){

        if(ans>(a[i+m-1]-a[i])){

            ans=(a[i+m-1]-a[i]);

        }

    }

    return ans;
}
int main (){
    int i,n,m;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>m;
    int ans =minDiff(n,m,arr);
    cout << "Minimum Difference : "<<ans<<endl;
    return 0;
}