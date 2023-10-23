#include "bits/stdc++.h"
using namespace std;
long long factorial(long long n){
    long long ans=1;

    for(long long i=1; i<=n; i++){
         ans*=i;
    }
    return ans;
}
int main (){
long long n,ans;
cout << "Enter value of n : "<<endl;
cin>>n;
ans=factorial(n);
cout << "Factorial of Large Number is: "<<ans<<endl;
return 0;
}