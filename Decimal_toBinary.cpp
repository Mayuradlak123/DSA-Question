#include "bits/stdc++.h"
using namespace std;

class Calculation
{
public:
    string toDecimal(int n)
    {
        int rem = 0;
        string ans = "";
        while (n != 0)
        {
            rem = n % 2;
            ans += to_string(rem);
            n = n / 2;
        }
        reverse(ans.begin(), ans.end());
        cout << "Binary Conversion : " << ans << endl;
        return ans;
    }
};
/*
 string ans="";
    int rev=0;
    while(n!=0){
        rev=n%2;
        ans+=to_string(rev);
 n=n/2;
    }
    cout<<"Answer is : "<<ans<<endl;
*/
int main()
{
    Calculation cal;
    printf("Binary Conversion of Given Number : %s", cal.toDecimal(6));
    return 0;
}