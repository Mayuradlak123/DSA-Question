#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;
int main(){
    int con;
    float f;
    string str,s;
    cin>>con;
    s=to_string(con);
    cout << "Enter an String for Conversion : "<<endl;
    getline(cin,str);
    istringstream(str)>>con;
    istringstream(con)>>str;
    fstream(str)>>f;
    cout <<f<<endl;
    cout << "Integer to String conversion: "<<s<<endl;
    cout <<"After type Conversion : "<< con << endl;
    cout << "Type of str is : "<<typeid(str).name()<<endl;
    cout << "Type of con is : "<<typeid(con).name()<<endl;
    return 0;
}