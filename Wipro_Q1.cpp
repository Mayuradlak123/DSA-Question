#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,m,i,j;
    cin>>n>>m;
    int A[n];
    int B[m];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    
    for(i=0;i<m;i++){
        cin>>B[i];
    }
    int c;
    cin>>c;
    int ans=(n*c)-1;
    cout <<ans;
    return 0;
    
}