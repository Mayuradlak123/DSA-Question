#include "bits/stdc++.h"
using namespace std;
int count_Square(int n){

    int i=1,count=0;

    while((i*i)<n){
        i++;
        count++;
    }
    return count;

}
int main(){
    int n;
    cout << "Enter an Number: "<<endl;
    cin>>n;
   cout << "Possible Number of Square : "<<count_Square(n)<<endl;
   return 0;
   
}