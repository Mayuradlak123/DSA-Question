/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n,flag=0,i=0,j;
vector<int>v;
    cout << "Enter an Number : "<<endl;
    cin>>n;
    for(i=1;i<n;i++){
        flag=0;
        for(j=2;j<i-1;j++){
            if(i%j==0){
            flag=1;
            break;
        }
      }
      if(flag==0){
           cout <<i << " ";
          v.push_back(i);
      }
    }
    int pos;
    cout << "Enter Postion Which largest \nNumber you wantr to access: "<<endl;
    cin>>pos;
    cout << "Given Postition Largest Prime Numebr : "<<endl;
    cout <<v[pos]<<" ";
      return 0;
}*/
#include "bits/stdc++.h"
using namespace std;
int main(){
  int i,j,n,f=0;
  cout << "Enter n : "<<endl;
  cin>>n;
  for (i=0; i<n; i++ ){
     f=0;
     for (j=2; j<i-1;j++){
      if(i%j==0){
        f=1;
        break;
      }
     }
     if(f==0){
      cout <<i<<" ";
     }
  }
  return 0;
}