#include <bits/stdc++.h>
using namespace std;
bool isArmnstrong(long long int number){
      int sum =0, n,rem=0,rev;
      n=number;
      while (number!=0){
        rem=number%10;
        sum=sum+pow(rem,3);
        number =number/10;
      }
      if(n==sum){
        return true;
      }
      else{
        return false;
      }      
}
int main(){
    long long int number ;
    cout <<"Enter Number for check : "<<endl;
    cin>>number;
   cout<< isArmnstrong(number)<<endl;
    return 0;
}