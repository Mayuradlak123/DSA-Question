#include <bits/stdc++.h>
using namespace std;
int minElement(int n,int a[]){
        int i,ans,temp=INT_MAX;
        cout << "Function is Running "<<endl;
        for (i=0; i<n; i++){
        if(a[i]<temp){
            temp=a[i];
            ans=min(ans,temp);
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
    int ans=minElement(n,a);
    cout << "Minimum Element in Array : "<<ans<<endl;
    return 0;
}