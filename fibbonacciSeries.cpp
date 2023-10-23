#include "bits/stdc++.h"
using namespace std;
void fibbonacci(int n){
    int a=0,b=1,c,i;
    for (i=2; i<n; i++){
       c=a+b;
       cout <<c<<" ";
       a=b;
       b=c;
    }
}
int main (){
    int n;
    cout << "Enter n : "<<endl;
    cin>>n;
    fibbonacci(n);
    return 0;
}