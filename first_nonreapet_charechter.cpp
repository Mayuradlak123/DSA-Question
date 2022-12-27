#include <bits/stdc++.h>
using namespace std;

char nonRepeat(string str){
    int i,n=str.length();
    unordered_map<char,int> umap;
    for (i=0; i<n; i++){
        umap[str[i]]++;
    }
    for (i=0; i<n; i++){
        if(umap[str[i]]==1){
            return str[i];
        }
    }
    return '$';
}
int main()
{
    string str;
    cout << "Enter an String : "<<endl;
    getline(cin,str);
    cout << "First Non Repeating Element : "<<nonRepeat(str)<<endl;
    return 0;
}