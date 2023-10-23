#include "bits/stdc++.h"
using namespace std;

class LeaderElement
{
public:
    void findLeader(int n, int *arr)
    {
        int i, leader = arr[n - 1];
        cout <<leader<<" ";
        for (i = n - 2; i >= 0; i--)
        {
            if (arr[i] > leader)
            {
                leader = arr[i];
                cout << leader << " ";
            }
        }
    }
};
int main(int argc, char const *argv[])
{
    LeaderElement leader;
    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    leader.findLeader(n, arr);
    return 0;
}
/*

*/