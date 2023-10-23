#include "cpp.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/majority-element/
class majoprityElement
{
public:
    int majority(int n, int *arr)
    {
        int i, j;
        unordered_map<int, int> mp;
        for (i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto x : mp)
        {
            if (x.second >= n / 2)
            {
                return x.first;
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[])
{
    majoprityElement object;
    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    object.majority(n, arr) >= 1 ? printf("Majority Element in array: %d ", object.majority(n, arr))
                                : printf("Not Found");
    return 0;
}
