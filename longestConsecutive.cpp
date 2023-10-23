#include "bits/stdc++.h"
#include "sorting.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/longest-consecutive-sequence/
class longestConsecutiveSubSequence
{
public:
    int longestConsecutive(int *arr, int n)
    {

        int ans = 0, temp = 0, i;
        selectionSort(n, arr);

        for (i = 0; i < n; i++)
        {
            while (arr[i] + 1 == arr[i + 1])
            {
                temp++;
                cout << arr[i] << ":" << arr[i + 1] << endl;
                ans = max(ans, temp);
                i++;
            }
        }
        return (ans < 0 ? -1 : ans + 1);
    }
};
int main(int argc, char const *argv[])
{
    longestConsecutiveSubSequence object;

    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array :" << endl;
    for (i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Longest Consecutive Sequence is : " << object.longestConsecutive(arr, n);
    return 0;
}
/*
#include "bits/stdc++.h"
using namespace std;
int longestConsecutive(int n, int arr[])
{
    int i, count = 1, counter = 1,ans=0;
    // sort the array
    while (counter < n)
    {
        for (i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        counter++;
    }

    {2,6,1,9,4,5,3}
Output:
6
{1,9,3,10,4,20,2} 7

    for (i=0; i<n; i++){
       if(arr[i]+1==arr[i+1]){
        count++;
        ans=max(ans,count);
       }
       cout<<arr[i]<<" ";
    }
    return ans;
}
int main()
{
    int i, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
cout << "Longest Consecutive Subsequence is :"<<longestConsecutive(n, arr);
    return 0;
}
*/
