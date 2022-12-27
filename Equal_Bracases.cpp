#include "bits/stdc++.h"
using namespace std;
int isEqual(string str){
    int op=0,cl=0,i;
    int n=str.size();
    for(i=0;i<n;i++){
        if(str[i]==')'){
            cl++;
        }
    }
    for(i=0;i<n;i++){
        if(op==cl){
            return i;
        }
        if(str[i]=='('){
            op++;
        }
        else{
            cl--;
        }
    }

}
int main(){
    string str;
    cin>>str;
    cout <<isEqual(str);
    return 0;
}