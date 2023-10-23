#include "iostream"
using namespace std;
void SelectionSort(int n, int arr[]){
    int i,j,minIndex;
    for (i=0; i<n; i++){
        minIndex=i;
        for (j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]) minIndex=j;
        }
        if(i!=minIndex)swap(arr[minIndex],arr[i]);
    }
}
int main (){
    int i,n;
    cout << "Enter Size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    SelectionSort(n,arr);
    cout<<"Sorted Array Selection sort: "<<endl;
     for (i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}