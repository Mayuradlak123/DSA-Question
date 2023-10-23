#include "iostream"
using namespace std;
int sumNumber(int n){
 if(n==1){
    return 1;
 }
 return ((n%10)+sumNumber(n/10));
}
int main (){
int n;
cout <<"enter n: "<<endl;
cin>>n;
printf("Sum of N value Digit is : %d ",sumNumber(n));
}