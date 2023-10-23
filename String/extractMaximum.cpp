#include "bits/stdc++.h"
using namespace std;
int extractMax(string str)
{

    int ans = 0, i, n = str.size(), a, m = 0;
    string temp = "";
    for (i = 0; i < n; i++)
    {
        if (str[i] >= '0' and str[i] <= '9')
        {
            temp += str[i];
            stringstream(temp) >> a;
            ans = max(a, ans);
            m = 1;
        }
        else
        {
            temp = "";
        }
    }
    if (m == 0)
    {
        return -1;
    }
    return ans;

}
int main()
{
    string str;
    cout << "Enter str : " << endl;
    cin >> str;
    printf("Maximum Number in String : %d ", extractMax(str));
    return 0;
}