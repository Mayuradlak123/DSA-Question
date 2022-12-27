// Stack follow Last In first Out Architecture 
// it means which Element in pushed in last they element is First Accesible 
//Some kind of Example  1. Books bundle 2 Browser Tab 

#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
class stackOperation{
   public:
   vector<int> Stack;
   public:
   void pushStack(int x){
     Stack.push_back(x);
     reverse(Stack.begin(),Stack.end()); 
   }

}


/*class StackOp{
   public:
   list<int>Stack;
  public:
void pushStack(int x){
  
    Stack.push_front(x);
}
void popStack(){
    cout << "Element poped Successfully: "<<endl;
   Stack.pop_front();
}
void printStack(){
    cout << "Traversal of Stack : "<<endl;
    for(auto i:Stack){
        cout <<i << " ";
     }
     cout << endl;
}
};
int main (){
  StackOp ob;
  ob.pushStack(10);
  ob.pushStack(20);
  ob.pushStack(30);
  ob.pushStack(40);
ob.popStack();
  ob.printStack();
  return 0;
}*/