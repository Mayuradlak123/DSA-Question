#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Sequence(string t,int i,int n,string s){

    if(i==n){
        
        cout <<t<<" ";
    }
    else{
        Sequence(t,i+1,n,s);

        t=t+s[i];

        Sequence(t,i+1,n,s);
    }
    // vector<int >v;
    
}

int main(){

    string s;
    cout <<"Enter an String : "<<endl;
    cin>>s;
    Sequence(" ",0,s.size(),s);
}