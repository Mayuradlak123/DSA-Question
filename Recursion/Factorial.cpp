#include "bits/stdc++.h"
using namespace std;
int Factorial(int n){
     if(n==1){
        return 1;
    }
     return n*Factorial(n-1);
}
int main (){
    int n;
    cout <<"Enter Value of n" <<endl;
    cin>>n;
    int fact=Factorial(n);
    printf("Factorial of Given Number is : %d ",fact);
    return 0;
}