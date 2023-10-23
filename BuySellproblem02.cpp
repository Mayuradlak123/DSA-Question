#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii
class stockBuySellProblem02{
   public:
   long long calculateProfit(int *arr,int n){
        int maxProfit=0,i;
        for (i=0; i<n; i++){
           if(arr[i]>arr[i-1]){
            maxProfit+=(arr[i]-arr[i-1]);
           } 
        }
        return maxProfit;
   }
};
int main(int argc, char const *argv[])
{
   stockBuySellProblem02 object;
   int i,n;
   cout << "Enter size of array : "<<endl;
   cin >> n ;
   int arr[n];
   cout <<"Enter element of array :"<<endl;
   for (i = 0; i < n; ++i) {
    cin>>arr[i];
   }
    long long ans=object.calculateProfit(arr,n);
    cout<<" Maximum Profit in this Stock: "<<ans<<endl;

    return 0;
}
/*
#include "bits/stdc++.h"
using namespace std;
// [5,2,6,1,4,7,3,6] ans=13
int maxProfit(int n, int arr[])
{
    int profit = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}
int main()
{
    int i, n;
 cout <<"Enter n : "<<endl;

    cin >> n;
    cout << "Enter element of n: "<<endl;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum Profit in this Stock is : " << maxProfit(n, arr);
    return 0;
}
*/