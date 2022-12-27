#include<bits/stdc++.h>
using namespace std;
int element_occure_k_time(int a[],int n,int k){

    int max=*max_element(a,a+n);
    int count[max+1]={0};
    for(int i=0;i<n;i++){
        count[a[i]]++;
        if(count[a[i]]==k){
            return a[i];
        }
    }
    return -1;
}
int main(){
    int n,i,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    cout <<element_occure_k_time(a,n,k);
    return 0;
}