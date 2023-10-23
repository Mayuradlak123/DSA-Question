#include "bits/stdc++.h"
using namespace std;
void fib(int n,int i,int a,int b)
{
    if(a==1 and b==2){
        cout <<a<<" "<<b<< " ";
    }
    int c=a+b;
     if(i==n) {
        return;
    }
    cout <<c<<" ";
    fib(n,i+1,b,c);
}
int main()
{
    int n;
    cin>>n;
    fib(n-1,1,1,2);
    return 0;
}/*

    if (a == 1 and b == 2)
    {
        cout << a << " " << b << " ";
    }
    int c = a + b;
    a = b;
    b = c;
    cout <<c<<" ";
    if(i==n){
        return;
    }
    fib(n,i+1,a,b);
*/