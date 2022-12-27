#include <bits/stdc++.h>
using namespace std;
int maxElement(int n,int a[]){
        int i,ans=0,temp=INT_MIN;
        cout << "Function is Running "<<endl;
        for (i=0; i<n; i++){
        if(a[i]>temp){
            temp=a[i];
            ans=max(ans,temp);
        }
    }
        return ans;
}
int main (){
    int i,n;
   
   cout << "Enter Size of array: "<<endl;
    cin>>n;
   int a[n];
    cout << "Enter Element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>a[i];
    }
    int ans=maxElement(n,a);
    cout << "Maximum Element in Array : "<<ans<<endl;
    return 0;
}