#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;

    int i;

    cout<< "Enter an String : "<<endl;

    cin>>s;

    cout<< "Itration of Given String : "<<endl;

    for(i=0;i<s.size();i++){

        cout <<s[i]<<endl;
    }

    cout <<"Reverse String : "<<endl;
    
    for(i=s.size();i>=0;i--){
        
        cout<<s[i]<<endl;
    }
    return 0;
}