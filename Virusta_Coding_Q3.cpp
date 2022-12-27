#include<bits/stdc++.h>
using namespace std;
int  Reverse_sen(string s){

    stack<string>st;
    
    int i,n=s.size();

    for(i=0;i<n;i++){
        
        string b="";
        while(s[i]!=' ' && i<n){
            b=b+s[i];
            i++;
        }
        st.push(b);
    }
    // cout << "Reverse Sentance : "<<endl;
    int  c=0;
    vector<string >v;
    
    while(!st.empty()){
        
        string str=st.top();
        
        string rev=st.top();
        
       reverse(rev.begin(),rev.end());
       
        if(rev==str){
            c++;
        }
    
        st.pop();
    }
    // cout << "cout of Pallindrom string "<<endl;

    return c;
}
int main(){
    string s;
    
    cout << "Enter sentence as a string : "<<endl;
    
    getline(cin,s);
    
    cout <<Reverse_sen(s);
     return 0; 
 }