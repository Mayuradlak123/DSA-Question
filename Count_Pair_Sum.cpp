#include<bits/stdc++.h>
using namespace std;

int countPair(int n,int k, int arr[]){
    int i,count=0,sum=0;
   unordered_map<int ,int >m;
    
         for(int i=0;i<n;i++)
         {
             if(m.find(k-arr[i])!=m.end())
             {
                 count=count+m[arr[i]];
             }
             m[arr[i]]++;
             
         }
        return count;
}
int main(){

    int n,i,j;
   
    cout << "Enter size of array : "<<endl;
   
    cin>>n;
   
    int a[n];
   
    cout << "ENter element  of array : "<<endl;
   
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   
    int k;
   
    cout << "Enter sum for check : "<<endl;
   
    cin>>k;

    cout << "Posiible Sum : "<<countPair(n,k,a)<<endl;

return 0;
}