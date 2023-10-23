#include "iostream"
using namespace std;
void permutation(int n, int arr[], int idx){
    int i;
  if(idx==n){
    for (i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
  }
    for (i=idx; i<n; i++){
        swap(arr[i],arr[idx]);
        permutation(n,arr,idx+1);
        swap(arr[i],arr[idx]);
    }
}
int main()
{
    int i, n;
    cout << "Enter LEnght of array : " << endl;
    cin >> n;
    cout << "Enter Elemenet of array : " << endl;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 
    cout <<"Permutation of Given array: "<<endl;
    permutation(n, arr, 0);
    return 0;
}