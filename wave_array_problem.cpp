#include "bits/stdc++.h"
using namespace std;
void Wave_array(int n,vector<int>v){
    int i;
    if(n%2==0){
        for (i=0; i<n; i+2){
            swap(v[i],v[i+1]);
        }

    }
    else{
        for (i=0; i<n-1; i+2){
            swap(v[i],v[i+1]);
        }
    }
}
int main(){
    int i,n;

    cout << "Enter size of vector : "<<endl;
    cin>>n;

    vector<int>v;
    for (i=0; i<n; i++){
        cin>>v[i];
    }
    cout << "After Altenate Sorting "<<endl;

    Wave_array(n,v);

for (i=0; i<n; i++){
    // cout <<val<<" ";
    cout <<v[i]<<" ";
}
    return 0;
}