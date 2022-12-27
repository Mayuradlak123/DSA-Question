#include<iostream>
using namespace std;
int main(){
    
    int n,i,b;
    
    cout <<"Enter size of array : "<<endl;
    //Here i'm taking size of array 
    cin>>n;
    
    int a[n];
    
    cout <<"Enter element of array : "<<endl;
    //array input using for loop 
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    int perSum=0;//this variable store all element intrest
    
    for(i=0;i<n;i++){ 
        b=a[i]*20/100;//calculate percentage of each element 
        perSum=perSum+b;
    }// printing all intreset of given ammount 
    cout <<perSum<<endl;
    return 0;
}