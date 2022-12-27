//This Solution is made by me My Brout force 
#include<bits/stdc++.h>
using namespace std;
int Fact(int n,int fac){
  if(n==1){
    return fac;
  }
  Fact(n-1,fac*n);
}
int main(){
    int n;
    cout<<"Enter an number: "<<endl;
    cin>>n;
    cout <<"Factorial of given number: "<<Fact(n,1);
    return 0;
}/*
#include<bits/stdc++.h>

using namespace std;

int Fact(int n){

    if(n==0){

        return 1;

    }

    else{

        return n*Fact(n-1); 
    }
}
int main(){
    int n;

    cout<<"Enter an number: "<<endl;

    cin>>n;

    cout <<"Factorial of given number: "<<Fact(n);

    return 0;
}*/