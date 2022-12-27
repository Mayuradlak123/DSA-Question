#include<bits/stdc++.h>
using namespace std;
int LCS(int x,int y,char str1[],char str2[]){
         set<char>ch;
          int n=min(x,y);
          sort(str1,str1+1);
          sort(str2,str2+1);
          string ans="";
          int i,j,len=0;
          for(i=0;i<x;i++){
              for(j=0;j<y;j++){
              if(str1[i]==str2[j]){
                  ans+=str1[i];
              }
          }
        }
        for(i=0;i<ans.size();i++){
          ch.insert(ans[i]);
        }
          return ch.size();
   }
  
int32_t main(){
    
    int i,j,x,y;
    
    cout << "Enter size of both array : "<<endl;
    
    cin>>x>>y;
    
    char s1[x];
    char s2[y];
    
    cout << "Enter S1 charecter: "<<endl;
    
     for(i=0;i<x;i++){
         
         cin>>s1[i];
         
     }
     cout << "Enter S2 charecter : "<<endl;
     
    for(j=0;j<y;j++){
        cin>>s2[j];
    }
    cout << LCS(x,y,s1,s2);
    return 0;
}