#include <bits/stdc++.h>
using namespace std;
class Non_reapiting
{
public:
    string str;


public:
    char output(string str)
    {
        int n = str.length(), i, j;
        unordered_map<char, int> umap;
        for (i = 0; i < n; i++)
        {
            umap[str[i]]++;
        }
        for (j = 0; j < n; j++)
        {
           if(umap[str[j]]==2){
               return str[j];
               break;
           }
        }
        return '$';
    }
    public:
    void Input_method()
    {
        cout << "Enter String : " << endl;
        cin >> str;
        cout << "First reapeting Element : " << output(str) << endl;
    }
};
int main()
{
    Non_reapiting object;
    object.Input_method();
    return 0;
}