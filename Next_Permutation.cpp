#include<bits/stdc++.h>
using namespace std;
void Next(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        
        swap(a[i],a[n-1]);
        
    }
    for(i=0;i<n;i++){
        
        cout <<a[i]<<" ";
    }
}
int main(){
    
    int n,i;
    
    cout << "Size of Array : "<<endl;
    
    cin>>n;
    
    int a[n];
    
    cout << "Enter Element of array : "<<endl;
    
    for(i=0;i<n;i++){
        
        cin>>a[i];
    }
    
    Next(a,n);
    
    return 0;
}