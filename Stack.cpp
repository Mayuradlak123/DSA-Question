#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    cout << "Push operation : "<<endl;

    s.push(10);

    s.push(5);

    s.push(7);

    s.push(3);

    s.push(12);

    s.push(8);

    s.push(9);

    s.pop();

    cout<< "If stack is empty so this \nfunction is return 1\n otherwise return 0"<<endl;

    bool x=s.empty();

    cout << "Top operation in Stack: "<<endl;

    cout << "Top Element in Stack : "<<s.top()<<endl;
    
    if(x==1){
        cout << "Stack is Empty "  <<endl;
    }
    else{
        cout << "Stack is Not empty : "<<endl;
    }
    while(!s.empty()){
        cout <<s.top()<<endl;
        s.pop();
    }
    // cout <<s.empty()<<endl;
    
   return 0;
     
}