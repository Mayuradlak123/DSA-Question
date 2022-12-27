#include "bits/stdc++.h"
using namespace std;
public:
void push_stack(){
    int element;
    cout <<"Enter Element for push :"<<endl;
    cin>>element;
    vector<int> v;
    v.push_back(element);
    reverse(v.begin(),v.end());
}
void printStack(){
   for(int i=0; i<v.size(); i++){
    cout <<v[i]<<" ";
   }
}
int main(){
    int i;
    int choice;
    cout <<"Enter your choice: "<<endl;
    cin>>choice;
    while(choice!=3){
         if(choice==1){
           push_stack();
         }
         if(choice==2){
            printStack();
         }
    }
      return 0;
}