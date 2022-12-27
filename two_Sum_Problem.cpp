#include<iostream>
using namespace std;
int main(){

     int n,i,j;

    cout << "Enter size of array : "<<endl;

    cin>>n;

    int a[n];

    cout << "ENter element  of array : "<<endl;

    for(i=0;i<n;i++){

        cin>>a[i];
    }
    int Sum,count=0;

    cout << "Enter sum for check : "<<endl;

    cin>>Sum;

    cout << "Pair index for Sum : "<<endl;
   
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){

        if(a[i]+a[j]==Sum){
            count++;
            
            cout <<i <<" "<<j<<" "<<endl;

        }
    }
}
    cout << "Posiible Sum : "<<count<<endl;
return 0;
}