#include "bits/stdc++.h"
using namespace std;
bool kAnagram(string s1,string s2,int k){
    int i,j,c=0;
    if(s1.length()!=s2.length()){
        return false;
    }
    set<char>s;
    for (i=0; i<s1.length(); i++){
        if(s.find(s2[i])==s.end()){
            c++;
        }
        else{
            s.insert(s1[i]);    
        }
    }
    cout <<c<<endl;
    
    if(c>=k)return true;
    else return false;
}
int main(){
    string s1,s2;
    cout << "Enter firts string : "<<endl;
    cin>>s1;
     cout << "Enter second string : "<<endl;
    cin>>s2;
    int k;
    cout <<"Enter value of k : "<<endl;
    cin>>k;

/*Two strings are called k-anagrams if following two conditions are true. 
Both have same number of characters.
Two strings can become anagram by changing at most k characters in a string. */
if(kAnagram(s1,s2,k)){
    cout << "Possible of Anagram : "<<endl;
}
else{
    cout <<"Not Possible "<<endl;
}
return 0;
}