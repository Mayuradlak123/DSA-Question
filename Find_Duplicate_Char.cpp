#include<bits/stdc++.h>
using namespace std;

void find_Duplicate(string s,int n){
    int i;
    unordered_map<char,int> umap;
    set<char> Set;
    for (i=0; i<n; i++){
        umap[s[i]]++;
    }
    for(i=0; i<n; i++){
        if(umap[s[i]]>1 and s[i]!=' '){
            Set.insert(s[i]);
        }
    }
    string str="";
    for(auto val:Set){
   str+=val;
    }
    cout << "Duplicate Charecter : "<<str<<endl;
}
int main(){
    
    string s;
    
    cout << "Enter an char or string : "<<endl;
    
    getline(cin,s);
    
    int n=s.size();
        
    find_Duplicate(s,n);
    
    return 0;
}