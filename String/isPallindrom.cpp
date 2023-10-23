#include "bits/stdc++.h"
using namespace std;
void isPallindrom(string str,string rev)
{
    reverse(str.begin(),str.end());
    cout << str<<" "<<rev<<endl;
    if(str==rev){
        cout << "Pallindrom "<<endl;
    }
    else{
        cout <<"Not Pallindrom "<<endl;
    }
}
int main()
{
    string str,rev;
    cout << "Enter an String : " << endl;
    cin >> str;
    str=rev;

    isPallindrom(str,rev);
    return 0;
}