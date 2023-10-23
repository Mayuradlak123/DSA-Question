#include "bits/stdc++.h"
using namespace std;

bool isPrime(int n){
    int i;
    for (i=2; i<n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main (){
  int n,i;
  cout <<"Enter n :"<<endl;
  cin>>n;
  for (i=0; i<n; i++){
    if(isPrime(i)){
        cout<<i<<" ";
    }
  }
  return 0;
}
