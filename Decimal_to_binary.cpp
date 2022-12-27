#include "bits/stdc++.h"
using namespace std;

class Dec_to_bin{
    public:
    void bin(int n){
        /* vector<int>v;
         int temp;
         while(n!=0){
            temp=n%2;
            n=n/2;
            v.push_back(temp);
         }
         reverse(v.begin(),v.end());
         cout << "Binary Conversion of n :" <<endl;
         for (auto i:v){
            cout <<i<<"";
         }      */
         int temp;
string ans="";
         vector<int> v;
         while(n!=0){
            temp=n%2;
            n=n/2;
        ans+=to_string(temp);
         }
         reverse(ans.begin(), ans.end());
         cout<< "Binary Conversion of Given Number is :  "<<ans<<endl;
   }
    void getInput(){
        int n;
        cout << "Enter value of n : "<<endl;
        cin>>n;
        bin(n);
    }
};
int main(){
    Dec_to_bin object;
    object.getInput();
}