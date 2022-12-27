#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout << "Enter size of array "<<endl;
    cin>>n;

    int a[n];

    cout << "Enter element of array : "<<endl;

    for(i=0;i<n;i++){
        cin>>a[i];
    }
     int k;
     cout << "Enter kth value "<<endl;
     cin>>k;

   sort (a,a+n);

    for(i=k;i<n;i++){
        cout <<a[i]<< " ";
    }
    return 0;
}