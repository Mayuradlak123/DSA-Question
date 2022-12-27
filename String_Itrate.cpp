#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    
    cout <<"Enter an String for Itratration"<<endl;
    cin>>s;

    for(int i=0;i<s.size();i++)
            {
                cout<<s[i]<<endl;
        
    }
    return 0;

}