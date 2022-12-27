#include <bits/stdc++.h>
using namespace std;

int main( ){
    string str;
    cout << "Enter an String : "<<endl;
    cin>>str;
    rotate(str,str+str.length(),5);
    cout << str<<endl;
    return 0;
}
