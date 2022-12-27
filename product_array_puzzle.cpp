#include "bits/stdc++.h"
using namespace  std;

int main(){
    int n,j,i,temp;
    cout << "Enter size of Vector : "<<endl;
    cin>>n;
    vector<long long int>v;
    cout << "Enter Element of Vector : "<<endl;
    for (i=0; i<n; i++){
         cin>>temp;
         v.push_back(temp);
    }
    long long int product=1;
     vector<long long int> vec;
     for(i=0; i<n; i++){
        product=1;
        for(j=0; j<n; j++){
            if(i==j){
                continue;
            }
            product*=v[j];
        }
    vec.push_back(product);
     }
     cout << "All posiblle product : "<<endl;
     for (i=0; i<n; i++){
        cout << vec[i]<<" ";
     }
     return 0;
     
}