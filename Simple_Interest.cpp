#include "bits/stdc++.h"
using namespace std;
int main(){
    int rate,time,amt;
    double SI=0;
    cout << "Enter rate time and amount : "<<endl;
    cin>>rate;
    cin>>time;
    cin>>amt;
    //Calculating Simple Interest 
    SI=amt*rate*time/100;
    cout << "Simple Interest is : "<<SI<<endl;
    return 0;
}