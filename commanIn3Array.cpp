#include "bits/stdc++.h"
using namespace std;

int main(){
    int i,n,temp;
    cout << "Enter size of all array : "<<endl;
    cin>>n;
    vector<int> v1,v2,v3,com,ans;
    cout << "Enter Element of v1 : "<<endl;
    for(i=0; i<n; i++){
        cin>>temp;
        v1.push_back(temp);
    }
       cout << "Enter Element of v2 : "<<endl;
      for(i=0; i<n; i++){
        cin>>temp;
        v2.push_back(temp);
    }
       cout << "Enter Element of v3 : "<<endl;
      for(i=0; i<n; i++){
        cin>>temp;
        v3.push_back(temp);
    }
    for(i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v1[i]==v2[j]){
                com.push_back(v2[i]);
          }
            
        }
    }
  for (i=0; i<com.size(); i++){
    for (int k=0; k<n; k++){
       if(com[i]==v3[k]){
        ans.push_back(com[i]);
       }
    }
  }
    cout << "Comman Element in Array : "<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}