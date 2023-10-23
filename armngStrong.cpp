#include "bits/stdc++.h" 
using namespace std;

class isArmStrong{
public:
 bool check(int n){
    int temp,ans=0,curr=n;
    while(curr!=0){
        temp=curr%10;
        ans+=pow(temp,3);
        curr=curr/10;
    }
    if(ans==n) return true;
    return false;
 }
};
int main(int argc, char const *argv[])
{
 isArmStrong object ;

 int n;
 cout << "Enter Number for check : "<<endl;
 cin>>n;
  object.check(n)?cout<< "Given Number is ArmngStrong":cout<<"Given number is not amngstrong "<<endl;
    return 0;
}
