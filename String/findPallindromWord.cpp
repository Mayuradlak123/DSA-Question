#include "bits/stdc++.h"
using namespace std;

class pallindromWord{
  public:
     void printWord(string str){
         int i,n=str.size();
         string temp="",rev="";
         for (i=0; i<n; i++){
           while(str[i]!=' ' && i<n) {
              temp+=str[i];
              i++;
           }
           rev=temp;
           reverse(temp.begin(),temp.end());
           if(temp==rev){
            cout <<temp<<" ";
           }
           temp="";
         }
     }
};
int main(int argc, char const *argv[])
{
    pallindromWord obj;

    string str;
    cout <<"Enter string :"<<endl;
    getline(cin,str);
    obj.printWord(str);
    return 0;
}
