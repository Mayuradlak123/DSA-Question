#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,i,a=0,b=1,c;
    cout << "Enter value till print series: "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        c=a+b;
        cout <<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}