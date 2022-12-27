#include<bits/stdc++.h>
using namespace std;
void reverse_Array(int i,int n,int a[]){

  //  reverse(a,a+n);
  cout << "First way to reverse array : "<<endl;

 for(i=n-1;i>=0;i--){
           
        cout << a[i]<<" ";
    }
      cout << "\nSecond way to reverse array : "<<endl;
    
    reverse(a,a+n);
    for(i=0;i<n;i++){
        cout << a[i]<<" ";
    }
}
int main(){
    int n,i;
    
    cout << "Enter size of array : "<<endl;

    cin>>n;

 int a[n];
 cout  <<"Enter element of array : "<<endl;

    for(i=0;i<n;i++){

        cin>>a[i];
    }

    reverse_Array(i,n,a);
    return 0;
}