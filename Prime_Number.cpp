#include<iostream>
using namespace std;

int PrimeNumber(int n,int i,bool flag){

    for(i=2;i<n;i++){

        if(n%i==0){
            
            flag=1;
        }
    }
    if(flag==0){

        cout << "Prime Number "<<endl;
    }
    else{

        cout <<"Not prime "<<endl;
    }
    return 0;
}
int main(){

    int n,i;

    bool flag=0;

    cout <<  "Enter an number "<<endl;

    cin>>n;

    PrimeNumber(n,i,flag);
    
    return 0;
}