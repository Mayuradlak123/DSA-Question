#include<bits/stdc++.h>
using namespace std;
// In this String Program Check string 1 is equal or 
// not to string 2 rotated string 1
bool Check_rotation(string str1,string str2,int n){
    
     for(int i=0;i<n;i++){
         
        swap(str2[i],str2[n-1]);
    }
    // cout <<str1;
   if(str2==str1){
       return true;
   }
   else{
      return false;
   }
}
int main(){
    
    string str1,str2,str3;
    
    cout<< "Enter String 1 and 2: "<<endl;
    
    cin>>str1>>str2;
    
    int i,n,j,m;
    
    n=str1.size();
    
    m=str2.size();
    
    cout <<Check_rotation(str1,str2,n)<<endl;
    
    return 0;
}