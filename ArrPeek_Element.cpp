#include <iostream>
using namespace std;
void peakElement(int n,int a[]){
    int i;
    cout << "Peak Element in Array : "<<endl;
    for (i=0; i<n;i++){
      if(a[i]>a[i-1] and a[i]>a[i+1]){
        cout <<a[i]<<" ";
      }
    }
}
int main (){
    int i,n;
    cout << "Enter Size of Array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter Element of array :"<<endl;
    for (i=0; i<n; i++){
        cin>>a[i];
    }
    peakElement(n,a);
    return 0; 
}



/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    
    cout << "Enter Size of array "<<endl;
    
    cin>>n;
    
    int a[n];
    
    cout << "Enter element of array "<<endl;
    
    for(i=0;i<n;i++){

        cin>>a[i];
    }
    
    cout << "Peek element "<<endl;
    
    for(i=0;i<n;i++){

        if(a[i+1]<a[i] && a[i-1]<a[i]){

            cout << a[i] <<" ";
        }
    }
      return 0;
}
*/