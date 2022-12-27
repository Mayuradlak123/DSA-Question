#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout <<"Size of array : "<<endl;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>v;
   
        for (i=0; i<n-1; i++){
            v.push_back(arr[n-1]);
            v.push_back(arr[i]);
            n--;
        }
   v.push_back(arr[n-1]);
 
   int odd=0,even=0;
   for ( i = 0; i < n; i+2) {
      odd+=v[i];
    }
   
    cout << "Even index positions sum " << even;
    cout << "\nOdd index positions sum " << odd;
   cout <<endl;
return 0;
}