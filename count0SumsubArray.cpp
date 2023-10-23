#include "bits/stdc++.h"
using namespace std;
class countZeroSumSubArray
{
public:
    int subArraysum(int n, vector<int>arr)
    {
        int sum = 0, count = 0, i;
        unordered_map<int, int> mp;
       for (int num : arr)
        {
            sum += num;

            cout <<sum<<" ";
            if (sum == 0)
            {
                count++;
            }
            if (mp.find(sum) != mp.end())
            {
                count += mp[sum];
            }
            mp[sum]++;
        }

        return count;
    }
};
int main()
{
    countZeroSumSubArray object;
    int i, n, t;
    vector<int> v;
    cout << "Enter n : " << endl;
    cin >> n;
    
    cout << "Enter element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    printf("Subarray with 0 Sum is : %d ", object.subArraysum(n, v));
    return 0;
}
// [4, 2, -3, -1, 0, 4]
