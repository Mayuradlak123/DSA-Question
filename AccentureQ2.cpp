#include<iostream>
using namespace std;
void Factorial(int i,int n,int m){
    
    int fac1=1;
    int fac2=1;
    for(i=1;i<=n;i++){
        fac1=fac1*i;
    }
    for(i=1;i<=m;i++){
        fac2=fac2*i;
    }
    if(fac1>fac2){
        cout << "Minimum Divisor :  "<<fac1/fac2<<endl;
    }
    else{
        cout << "Minimum Divisor :  "<<fac2/fac1<<endl;
    
    }
}
int32_t main(){

    int i,n,m;

    cout << "Enter value of n and m :" <<endl;

    cin>>n>>m;
    
   Factorial(i,n,m);
   return 0; 
}