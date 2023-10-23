#include "bits/stdc++.h"
using namespace std;

class printPallindrom {
public:
    bool isPallindrom(int x){
     int temp=x,rem=0,rev=0;
     while(temp!=0){
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
     }
     return rev==x;
    }
     void printNumber(){
        int i;
        for ( i = 1; i <= 100; i++){
            if(isPallindrom(i)){
                cout <<i<<" ";
            }
        }
        
     }
};
int main(int argc, char const *argv[])
{
    printPallindrom obj;
    obj.printNumber();
    return 0;
}
