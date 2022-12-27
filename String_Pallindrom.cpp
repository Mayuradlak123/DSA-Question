#include<bits/stdc++.h>

#include<iostream>

#include<string>

using namespace std;

void Is_Pallindrom(string s,string p){

    reverse(p.begin(),p.end());

    if(s==p){
        cout <<"String Pallindrom : "<<endl;
    }
    else{
        cout<<"Not Pallindrom: " <<endl;
    }
}
int main(){
    
    string s;
    
    cout<<"Enter an String for check :"<<endl;
    
    cin>>s;
    
    string p=s;

     Is_Pallindrom(s,p);

    return 0;
}