#include<iostream>

#include<string.h>

#include<algorithm>

using namespace std; 

bool is_Anagram(string str1,string str2){
    
    int i,n=str1.size();
    
    int m=str2.size();
    
    int flag=0;
    
    if(n!=m){
        
    
        return 0;
    }
    else{
        sort(str1.begin(),str1.end());
        
        sort(str2.begin(),str2.end());
        
        for(i=0;i<max(n,m);i++){
            
            if(str1[i]==str2[i]){
                flag=1;
            }
            else{
             flag=0;
            }
        }
    }
    return flag;
}

int main(){
    string str1,str2;
    
    cout << "If given string is Anagram so \nyou return 1 otherwish 0  alright : "<<endl;

    cout << "Enter two str for check : "<<endl;

    cin>>str1>>str2;
    
   cout << is_Anagram(str1,str2)<<endl;

    return 0;    
}