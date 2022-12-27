#include <bits/stdc++.h>
using namespace std;

void reverseMe(string str){
    stack <string> s;
    int i;
    for (i=0; i<str.length(); i++){
        string temp="";
        while(str[i]!=' ' and i<str.length()){
            temp+=str[i];
            i++;
        }
        s.push(temp);
    }
    cout << "String in Reverse  using Stack : "<<endl;
 while(!s.empty()){
    cout <<s.top()<<" ";
    s.pop();
 }
}
int main (){
    string str;
    cout << "Enter Your Input String : "<<endl;
    getline(cin,str);
    reverseMe(str);
    return 0;
}