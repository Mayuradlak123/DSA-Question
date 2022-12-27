#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;

    cout<< "Enter two String "<<endl;

    cin>>s1;

    cin>>s2;
   
    s1.append(s2);

    cout<< "Size of String "<<s1.size()<<endl;

    s1.clear();//clear function use for delete all string 

    cout<<s1<<endl;


 return 0;  
}