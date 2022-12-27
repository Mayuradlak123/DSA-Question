#include "bits/stdc++.h"
using namespace std;
void move_First(int arr[],int n){
    vector<int>neg;
    vector<int>pos;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<0){

            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    vector<int >::iterator it;

    for(it=neg.begin();it<neg.end();it++){
        cout << *it<<" ";
    }

    for(it=pos.begin();it<pos.end();it++){
        cout << *it<<" ";
    }
            
}
int main(void){
    
    int n,i;
    
    cout << " Enter size of array :"<<endl;
    cin>>n;
    
    int arr[n];
    
    cout << "Enter Element of array : "<<endl;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   
   move_First(arr,n);
   return 0;
   
}