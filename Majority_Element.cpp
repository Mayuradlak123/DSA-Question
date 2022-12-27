#include<bits/stdc++.h>
using namespace std;

int mejority_Elenment(int n,int arr[]){
  unordered_map<int,int> ump;
  for (int i=0; i<n; i++){
    ump[a[i]]++;
    if(ump[a[i]]==n/2){
        return a[i];
    }
  } 
  for (auto val:ump){
    cout <<val.first<<" "<<val.second<<endl;
  }
  return -1;
  /*
  O(n^2) Approach 
         int count=1,i,j,ans;
        for (i=0; i<n; i++){
            for (j=0; j<n; j++){
                if(a[i]==a[j] && i!=j){
                    count++;
                }
            }
            if(count>n/2){
                return a[i];
            }
            count=0;
        }
        return -1; 
  */
}
int main(){
    int i,n;
    cout << "Enter sise of array : "<<endl;
cin>>n;
int arr[n];

cout << "Enter element of array"<<endl;
for (i=0; i<n; i++){
    cin>>arr[i];
}
int ans=mejority_Elenment(n,arr);
cout <ans<<" ";
return 0;
}