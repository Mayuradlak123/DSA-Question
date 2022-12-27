#include<iostream>
using namespace std;
int main(){
    
    int i,n,gap;
    
    cout << "Enter size of array : "<<endl;
    
    cin>>n;
    
    int a[n];
    
    cout << "ENter Elemenet of array : "<<endl;
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
         gap=a[i+1]-a[i];
        break;
    }
    for(i=0;i<n;i++){
        if((a[i]+gap)!=a[i+1]){
            
            cout <<" Missing Number : "<<a[i]+gap<<" ";
            break;
        }
        else{
            cout<<"";
        }
    }
    
    return 0;
}