#include "bits/stdc++.h"
using namespace std;
long long count_divisible(int a[],int n,int k){
       long long ans=0;
       int i,j;
       unordered_map<int,int > m;
       for (i=0; i<n; i++){
        for (j=i+1; j<n;j++){
            if((a[i]+a[j])%k==0){
                ans++;
            }
        }
       }
    //    for(i=0;i<n;i++){
    //        int rem=a[i]%k;
    //        if(rem!=0){
    //            ans=ans+m[k-a[i]%k];
               
    //        }
    //        else{
    //            ans+=m[0];
    //            m[rem]++;
           
    //        }
    //    }
       return ans;
}
int main(){
   int i,n;
   cout << "Enter Number of Element : "<<endl;
    cin>>n;
cout <<"Enter Element of array : "<<endl;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int  k;
    cout << "Enter value of k : "<<endl;
    cin>>k;
    cout <<count_divisible(a,n,k);
    return 0;
}