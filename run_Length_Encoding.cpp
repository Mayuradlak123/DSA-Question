#include "bits/stdc++.h"
using namespace std;
string run_Length(string str){

    int n=str.size();

    string result="";

    int count=1,i;
    sort(str.begin(), str.end());

    for(i=0;i<n;i++){

       if(str[i]==str[i+1]){
           count++;
        }
        else{
            result=result+str[i]+to_string(count);
            count=1;
        }
    }
     return result;   
}
int32_t main(){
    string str;
    
    cout<< "Enter an string : "<<endl;
    
    cin>>str;
    
    cout << "Conversion : "<<endl;
    
    cout<<run_Length(str)<<endl;
    
    return 0;
}