#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void Display(){
        cout << " This is Display Function in  A class "<<endl;
    }
};
class B : public A{
   public:
   void Display (){
       cout << "Class B function "<<endl;
   }
};
class D: public B,A{
    
     void Display (){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
         cout << "Class D function calling : "<<endl;
    }
};
int main(){
    D d;
    // d.Display();
    return 0;
}