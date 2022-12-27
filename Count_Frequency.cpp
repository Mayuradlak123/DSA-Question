#include<bits/stdc++.h>
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
    
    int x,count=0;
    
    cout << "Enter Value of X: "<<endl;
    cin>>x;
    
    for(i=0;i<n;i++){
        
        if(a[i]==x){
            count++;
        }
    }
    
    cout << "Frequency of given Element : "<<count<<endl;
    return 0;
}
