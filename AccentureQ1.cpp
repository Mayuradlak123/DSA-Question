// Count Number of Zero in factorial of Given Number  
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,rem,fact=1,count=0;
    cout << "Enter Number for find Factorial: "<<endl;
    cin>> n;
    for(i=1; i<=n;i++){
        fact*=i;
    }
    cout << "Factorial of Given Number is : "<<fact<<endl;
    while(fact!=0){
        rem=fact%10;
        if(rem==0){
            count++;
        }
        fact=fact/10;
    }
    cout << "Number of Zero in Factorial : "<<count<<endl;
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    
    int rem,i,n,fac=1,count=0;
   
   cout <<"Enter an Number : "<<endl;

   cin>>n;

  for(i=1;i<=n;i++){
      fac=fac*i;
  }
   cout<<"Factorial of given Number: "<<fac<<endl;
   
   while(fac!=0){
       rem=fac%10;
       if(rem==0){
           count++;
       }
       fac=fac/10;
   }
   cout<<"0 Frequency :"<<count<<endl;
    return 0;
}*/