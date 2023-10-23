#include "bits/stdc++.h"
using namespace std;
int isBalanced(string str){
    int i,count=0,open=0;
    if(str.length()%2==1){
        return -1;
    }
    for (i=0; i<str.length(); i++){
       if(open==0 and str[i]=='}'){
        open++;
        count++;
       }
       else if(str[i]=='}'){
        open--;
       }
       else if (str[i]=='{'){
        open++;
       }
    }
    cout <<count<<" "<<open<<" ";
    return count+open/2;
}
int main (){
    string str;
    cout << "Enter string of braces: "<<endl;
    cin>>str;
    int ans=isBalanced(str);
    if(ans==-1){
        cout <<"we Can't Balance this braces: "<<endl;
    }
   printf(" %d reversal required : ",ans);

   return 0;
}