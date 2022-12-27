#include "bits/stdc++.h"
using namespace std;
int main(){
  int date,year,month;
  cout << "Enter your Birth Date" << endl;
  cin>>date;
  cout << "Enter Your number of birth Month  : "<<endl;
  cin>>month;
    cout << "Enter Your Birth Year : "<<endl;
  cin>>year;

  string dob="";
  dob=to_string(date)+to_string(month)+to_string(year);
  int n=stoi(dob);
  cout <<n<<endl;
  string ans="";

   vector<int>v;
         int temp;
         while(n!=0){
            temp=n%2;
            n=n/2;
            v.push_back(temp);
         }
         reverse(v.begin(),v.end());
         cout << "Binary Conversion of n :" <<endl;
         for (auto i:v){
            ans+=to_string(i);
         }
cout << "Conversion in Bit : "<<ans <<endl;
return 0;
}