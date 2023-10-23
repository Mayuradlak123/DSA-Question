#include "bits/stdc++.h"
using namespace std;


bool isPrime(int x)
    {
        int i;
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    void printPrime(int n)
    {
        int i;
        for (i = 2; i <= n; i++)
        {
           if(isPrime(i)){
            cout <<i<<" ";
           }
        }
    }

int main(int argc, char const *argv[])
{
    
    int n;
    cout <<"Enter n: "<<endl;
    cin>>n;
    cout <<" Prime Numbers : "<<endl;
    printPrime(n);
    return 0;
}
