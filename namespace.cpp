#include "bits/stdc++.h"
using namespace std;
namespace  first{
    void Display(){
        cout << "First Namespace Block in C++ : "<<endl;
    }
}
namespace second{
    void Display(){
        cout << "Second Namespace Block in C++ : "<<endl;
    }
}
int main(){
    first::Display();
    second::Display();
    return 0;
}