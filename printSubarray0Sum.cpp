#include "bits/stdc++.h"
using namespace std;
void subArray0Sum(int n, int *arr) {
    unordered_map<int, int> sumMap;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == 0) {
            // If the current sum is 0, it means the subarray from the start to the current index has a sum of 0.
            for (int k = 0; k <= i; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }

        if (sumMap.find(sum) != sumMap.end()) {
            // If the current sum has been seen before, it means the subarray between the previous occurrence and the current index has a sum of 0.
            int start = sumMap[sum] + 1;
            for (int k = start; k <= i; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }

        // Store the sum along with its index in the map.
        sumMap[sum] = i;
    }
}int main (){
    int i,n;
    cout << "Enter n "<<endl;
    cin>>n;
    int arr[n];
 cout << "Enter element of array "<<endl;
 for (i=0; i<n; i++){
    cin>>arr[i];
 }
subArray0Sum(n,arr);

    return 0;
}