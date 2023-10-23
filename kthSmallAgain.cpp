#include "bits/stdc++.h"
using namespace std;
int kthSamllestAgain(int n,int k,int *arr){
    int i;
    priority_queue<int>p;
    for (i=0; i<n; i++){
        p.push(arr[i]);
        if(p.size()>k){
            p.pop();
        }
    }
    // cout << "Itration of queue: "<<endl;
    // while(!p.empty()){
    //     cout <<p.top()<<" ";
    //     p.pop();
    // }
    cout <<endl;
    return p.top();
}
int main (){
    int i,n,k;
    cout  <<"Enter n: "<<endl;
    cin>>n;
    int arr[n];
    cout  <<"Enter element of array  : "<<endl;
    for (i=0;i<n; i++){
        cin>>arr[i];
    }
    cout << "Enter value of k "<<endl;
    cin>>k;
    printf("Kth smallest element is: %d ",kthSamllestAgain(n,k,arr));
    return 0;
}