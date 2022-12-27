#include "bits/stdc++.h"
using namespace std;
int main(){
    int a,b;
    cout << "Enter value of a and b : "<<endl;
    cin>>a;
    cin>>b;
    cout << "Value of A is : "<<a<<endl;
    cout << "Value of B is : "<<b<<endl;
    cout << "Value After Swaping : "<<endl;
    //First Approch

    a=a^b;
    b=b^a;
    a=b^a;
    // Second Approch
    cout << "Value of a : "<<a<<endl;
    cout << "Value of b : "<<b<<endl;
    return 0;
}