#include "bits/stdc++.h"
using namespace std;
bool parenthesis_checker(string str){
    stack<char> s;
    for (int i=0; i<str.size(); i++){
                   if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
               s.push(str[i]);
           }
           else{
               if(s.empty()) {
                return false;
               }
               else if(str[i]==')')
                   {
                      if(s.top()=='('){
                      s.pop();
                    }
                      else return false;
               }
                else if(str[i]==']')
               {
               if(s.top()=='[') {
                s.pop();
               }
               else {
                return false;
               }
               }
                else if(str[i]=='}')
               {
               if(s.top()=='{') {
                s.pop();
               }
               else 
               {return false;
               }
               }
           }
       }
       if(s.empty()){ 
        return true;
        }       
    }
int main(){
    string str;
    cout << "Enter Parenthesis string : "<<endl;
    cin>>str;

    if(parenthesis_checker(str)){
cout <<"Balanced "<<endl;
    }
    else{
        cout <<"Not Balanced "<<endl;
    }
    return 0;
}