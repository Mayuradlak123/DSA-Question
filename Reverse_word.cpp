#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void Reverse_sen(string s){

    stack<string>st;
    
    for(int i=0;i<s.size();i++){
        string w="";
        while(s[i]!=' ' && i<s.size()){
            w+=s[i];
            i++;
        }
       
        st.push(w);
       
    }
    cout << "Reverse Sentance : "<<endl;
    while(!st.empty()){
        cout <<st.top()<<" ";
        st.pop();
    }
    
}
int main(){
    string s;
    cout << "Enter sentence as a string : "<<endl;
    getline(cin,s);
    Reverse_sen(s);
     return 0; 
 }
 /*
    
    for(int i=0;i<s.size();i++){
        string w="";
        while(s[i]!=' ' && i<s.size()){
            w+=s[i];
            i++;
        }
        st.push(w);
        programmer a am I, mayur is name My
    }
 
 */