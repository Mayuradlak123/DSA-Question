#include<iostream>
using namespace std;
int main(){
    
    int n,i;
    
    cout << "Enter Number of Element : "<<endl;
    
    cin>>n;
    
    int a[n];
    
    cout << "Enter Element of array: "<<endl;
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout << "This Number is Equal to it's Index:  "<<endl;
    for(i=0;i<n;i++){
        if(a[i]==i){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}