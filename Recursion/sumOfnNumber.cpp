#include "bits/stdc++.h"
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }
    int sum=Sum(n-1);
    return n+sum;
}
int main (){
    int n;
    cout <<"Enter value of n :"<<endl;
    cin>>n;
  printf("Sum of %d Number is : %d  ",n,Sum(n));
    return 0;
}