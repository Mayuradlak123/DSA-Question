#include "bits/stdc++.h"
using namespace std;
int countSquare(int n)
{
    int i = 1, count = 0;
    while ((i * i) < n)
    {
        i++;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;
    printf("Possible sqaure root is : %d ", countSquare(n));
    return 0;
}