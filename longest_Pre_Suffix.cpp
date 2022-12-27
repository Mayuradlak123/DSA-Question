#include<bits/stdc++.h>
using namespace std;
int longest_Pre_Suffix(string s){
    
    int n=s.size();
    int lps[n];
    lps[0]=0;
    int i=0,j=1;
    while(j<n){
        if(s[i]==s[j]){
            lps[j]=i+1;
            i++;
            j++;
            }
            else{
                if(i==0){
                    lps[0]=j;
                    j++;
                }
                else{
                       i=lps[i-1];
                }
       }
       }
       return lps[n-1];
    
}
int32_t main(){
    string s;
    cout << "Enter an String : "<<endl;
    
    cout.tie(NULL);
    cin.tie(NULL);
    
    getline(cin,s);
    
    cout <<longest_Pre_Suffix(s)<<endl;
    return 0;
}