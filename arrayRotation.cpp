#include<bits/stdc++.h>
using namespace std;

 void arrayRotation(int a[],int n){

     cout<< "Clock wish rotation of Array: "<<endl;
     
   
    for(int i=0;i<n;i++){
        
        swap(a[i],a[n-1]);

        cout<<a[i]<<" ";
    }
}
int main(){
    int n,i=0;
    
    cout << "Enter size of array : "<<endl;
    
    cin>>n;
    int a[n];
    
    cout << "Enter Element of array : "<<endl;
    for(i=0;i<n;i++){
        
        cin>>a[i];
    }
    arrayRotation(a,n);
    
    return 0;
}