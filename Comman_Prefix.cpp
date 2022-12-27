#include<bits/stdc++.h>
using namespace std;
string  Prefix(string str[],int n){
    sort(str,str+n);
    string low=str[0],high=str[n-1];
    string ans="";
    int i;
    for (i=0; i<n; i++){
      if(low[i]==high[i]){
        ans+=low[i];
      }
    }
    if(ans==""){
    return "-1";
    }
    else{
return ans;
    }










    // string ans  ="";
    //  sort(str,str+n);
    // string a=str[0],b=str[n-1];
    //   for(int i=0;i<a.size();i++)
    //   {
    //       if(a[i]==b[i]){
    //         ans+=a[i];  
    //       } 
    //       else{
    //         break;
    //       }
    //   }
    //   if(ans=="") 
    //   {
    //       return "-1";
    //   }
    //   else{
    //     return ans;     
    //   }
}
int main(){
    
    int i,n;
    cout  <<  "Enter size of String : "<<endl;
    cin>>n;
    cout << "Enter Element of String : "<<endl;
    string str[n];
   for ( i = 0; i < n; i++)
   {
       cin>>str[i];
       /* code */
   }
   
   cout << "Longest comman pefix: "<<Prefix(str,n);
   return 0;
}