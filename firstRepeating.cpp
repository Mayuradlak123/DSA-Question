#include "bits/stdc++.h"
using namespace std;

class firstRepeating
{
public:
    int firstRepeated(int *arr, int n)
    {
        // O(n)^2 Approach
        int i,j;
        for (i=0; i<n; i++){
            for (j=i+1; j<n; j++){
                if(arr[i]==arr[j]){ return i;}
            }
        }

    }
    int fisrtRepeatingInArray(int *arr,int n){
        map<int,int>mp;
        int i,j;
        for (i=0; i<n; i++){
           mp[arr[i]]++;
        }
        for (auto &&x : mp){
             cout <<x.second<<" : "<<x.first<<endl;
        }
        
    }
};
int main(int argc, char const *argv[])
{
    firstRepeating object ;
    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Elemen of Array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printf("First Repeated Element in Array : %d ",object.fisrtRepeatingInArray(arr,n));
    return 0;
}
