#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(int n,int a[]){
int i,j;
for(i=0; i<n; i++){
    for(j=0; j<n-i-1; j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
}
int main(){
    
    int temp,i,n,j;
    
    cout << "Enter size of array : "<<endl;
    
    cin>>n;
    
    int a[n];
    
    cout << "Enter element of array : "<<endl;
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
     Bubble_Sort(n,a);
     cout << "Sorted Array  USing Bubble sort : "<<endl;
    for(i=0;i<n;i++){   
        cout <<a[i]<<" ";
    }
   return 0;
}