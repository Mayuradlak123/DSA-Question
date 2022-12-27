#include "bits/stdc++.h"
using namespace std;

int min_Flip(string S){
    int c1=0,c2=0;
  int ans=0;
  
  for(int i=0;i<S.length();i++){
     
      if(i&1 and S[i]=='0') c1++;
      
      
      if(i%2==0 and S[i]=='1') c1++;
      
      if(i&1 and S[i]=='1') c2++;
      
      if(i%2==0 and S[i]=='0') c2++;
      
      ans=min(c1,c2);
  } 
        return ans;
    // your code here
}

int  main(){
    string s;
    cout << "Enter an string  : "<<endl;
    cin>>s;
   cout <<min_Flip(s);
   return 0;
}