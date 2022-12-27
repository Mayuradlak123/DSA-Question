#include<iostream>
using namespace std;
int FindSum(int n,int oddSum,int evenSum,int a[],int i){

    for(i=0;i<n;i++){

        if(a[i]%2==0){

            evenSum+=a[i];
        }
        else
            oddSum+=a[i];
    }
    if(oddSum>evenSum){

        return oddSum-evenSum;
    }
    else{
        
      return evenSum-oddSum;
}
}
int main(){
    
    int i,n,oddSum=0,evenSum=0;

   cout <<"Enter size of array : "<<endl;

   cin>>n;

   int a[n];

   cout <<"Enter element of array : "<<endl;

   for(i=0;i<n;i++){
     cin>>a[i];
   }

   cout<<FindSum(n,oddSum,evenSum,a,i)<<endl;

}