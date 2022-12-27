#include <bits/stdc++.h>
using namespace std;
bool isTripletSum(int n, int a[],int x){
    sort(a,a+n);
       int sum = 0,start,end;
       for(int i = 0; i<n; i++)
       {
           start=i+1;
            end= n-1;
           while(start<end)
           {
               sum = a[i]+a[start]+a[end];
               if(sum>x)
               {
                   end--;
                
               }
               else if(sum<x) {
                   start++;
                   
               }
               else {return true;}
           }
       }
       return false;
    }
int main(int argc, char **argv){
    int n,i,x;
     cout << "Enter size of array" << endl;
     cin>>n;
    int a[n];
    cout << "Enter Element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>a[i];
    }
    cout << "Enter Sum for find triple sum : "<<endl;
    cin>>x;
    cout <<isTripletSum(n,a,x);
    return 0;
}
