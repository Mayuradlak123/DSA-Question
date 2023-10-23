#include "bits/stdc++.h"
using namespace std;
int closetWord(string s[], string w1, string w2, int n)
{
    int i, l = 0, h = 0;
    for (i=n; i>=0; i--){
        if(s[i]==w2){
            h=i;
        }
        if(s[i]==w1){
            l=i;
            break;
        }
    }
    // cout <<h<<l<<" ";
    return h-l;    
}
int main()
{
    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    string str[n], w1, w2;

    cout << "Enter word of string: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cout << "Enter word 1 : " << endl;
    cin >> w1;
    cout << "Enter word 2 : " << endl;
    cin >> w2;
    int ans = closetWord(str, w1, w2, n);
    printf("Minimum Distacne in word : %d ", ans);
    return 0;
}