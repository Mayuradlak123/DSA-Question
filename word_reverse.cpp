/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string rev="",temp2;
    string word="programmer a am I, mayur is name My";
    // getline(cin,word);
    stack<string> s;
  for (int i=0; i<word.length(); i++){ 
      if(word[i]!=' '){
        rev+=word[i];
        
        }
        else{
            s.push(rev);
            s.push(" ");
rev="";      
        }
      
      }
  
   while(!s.empty()){
      cout <<s.top();
      s.pop();
  }
  return 0;
}
