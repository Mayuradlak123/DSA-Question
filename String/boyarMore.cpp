#include "bits/stdc++.h"
using namespace std;

class boyarMoreAlgorithm {
   public:
   int findPattern (string str,string pattern){
         int i;
         for ( i = 0; i < str.length(); i++)
         {
            if(str.substr(i,pattern.length())==pattern){
             return i;
            }
         }
         return -1;
   }
};
int main(int argc, char const *argv[])
{
    string str,pattern;
    cout<< "Enter string : "<<endl;
    getline(cin,str);

    cout<< "Enter pattern : "<<endl;
    cin>>pattern;
  boyarMoreAlgorithm object;
  printf ("Pattern found at Index : %d ",object.findPattern(str,pattern));
    return 0;
}
