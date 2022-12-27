#include "bits/stdc++.h"
using namespace std;
vector<int> find(int arr[],int n,int x){
int i,j;
vector<int>v;
      for(i=0;i<n;i++){
            if(arr[i]==x){
                v.push_back(i);
                break;
            }
    }
        for(j=n;j>=0;j--){
            if(arr[j]==x){
                v.push_back(j);
                break;
            }
        }
    if(v.size()<1){
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
    return v;
}
int main(){
    int i,n,x;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout <<"Enter Element of array : "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter Vlaue of X : "<<endl;
    cin>>x;
  vector<int >ans;
  ans=find(arr,n,x);
  cout <<ans[0]<<" "<<ans[1]<<endl;

    return 0;

}