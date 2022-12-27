#include <bits/stdc++.h>
using namespace std;
class Base{
    public:
   virtual void Print(){
       cout << "This is Base class Print : "<<endl;

    }
    
   virtual void Show(){
        cout << "This is Show fucntion Base class: "<<endl;
    }
};
class Drived: public Base{
     public: 
     void Print(){
         cout << "This is Drived Print function : "<<endl;
     }
     void Show(){
         cout << "This is Show in drived class: "<<endl;
     }
};
int main(){
    Base *b;
    Drived d;
    b=&d;
    b->Print();
    b->Show();
    return 0;
}