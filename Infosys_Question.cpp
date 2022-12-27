#include "bits/stdc++.h"
#include "string.h"
using namespace std;
int infosys(string str, string digit)
{
    string s = "",rev="";
    int i;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == digit[0])
        {
            continue;
        }
        else
        {
            s += str[i];
        }
    }
    for (i=0; i<str.length(); i++){
        if(str[i]==digit[0]){
            continue;
        }
        else{
            rev+=str[i];
        }
    }
    int n,m,res;
   rev=int(n);
   s=int(m);

    return max(n,m);
}
int main()
{
    string str, digit;
    cout << "Enter an String : " << endl;
    cin >> str;
    vector<string> v;
    cout << "Enter an digit : " << endl;
    cin >> digit;
    cout << infosys(str, digit) << endl;
    return 0;
}