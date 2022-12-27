#include<bits/stdc++.h>
using namespace std;
int findXor(int a[],int n,int Xor){
    
    for(int i=0;i<n;i++){
        
        
        Xor=Xor xor a[i];
    }
    return Xor;

}
int main(){
    int n,i,Xor=0;
    
    cout << "Enter Number of array: "<<endl;
    
    cin>>n;
    
    
    int a[n];
    
    cout << "Enter Element of array : "<<endl;
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout <<"Xor of Given Operation : "<< findXor(a,n,Xor);
    
    return 0;
    }