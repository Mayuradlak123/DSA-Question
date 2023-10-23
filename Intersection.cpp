#include "bits/stdc++.h"
using namespace std;
class intersectionOfTwoArray
{
public:
    vector<int> getIntersection(int n, int m, int *arr1, int *arr2)
    {
        int i, j;
        vector<int> ans;
        set<int> s(arr1,arr1+n);
        
        for (j = 0; j < min(n, m); j++)
        {
            if (s.find(arr2[j]) != s.end())
            {
               ans.push_back(arr2[j]);
            }
        }
        return ans;
    }
};
int main()
{
      intersectionOfTwoArray object;
    int i, n, m;
    cout << "Enter size of array 1 : " << endl;
    cin >> m;

    cout << "Enter size of array 2 : " << endl;
    cin >> n;
    int arr1[n], arr2[m];
    cout << "Enter Element of array 1: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter Element of array 2: " << endl;
    for (i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << "Intersection of both array : " << endl;
   vector <int>ans= object.getIntersection(n,m,arr1,arr2);
   for (auto x : ans) {
     cout <<x<<" ";
   }
   
    return 0;
}