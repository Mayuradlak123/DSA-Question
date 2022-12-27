#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    
    cout << "Enter size of array "<<endl;
    
    cin>>n;
    
    int a[n];
    
    cout << "Enter element of array "<<endl;
    
    for(i=0;i<n;i++){

        cin>>a[i];
    }
    cout << "Leader Element in This Array :"<<endl;
       
        int leader =a[n-1];
       
       cout <<leader<<" ";
        for (i=n-2; i>=0; i--){
            if(a[i]>=leader){
                leader=a[i];
              cout <<a[i]<<" ";
            }
        }
    
    return 0;
}