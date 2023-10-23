#include "bits/stdc++.h"
using namespace std;

void bubbleSort(int n,int arr[]){
    int i,j,counter=0;
    while(counter<n){
        for (i=0; i<n-counter; i++){
            if (arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
    }
}
void selectionSort(int n,int arr[]){
    int i,j;
    for (i=0; i<n; i++){
        for (j=i; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void insertionSort(int n,int arr[]){
    int i,j;
    for (i=0; i<=n; i++){
        for (j=i; j<n; j++){
           if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
        }
    }
}
void print(int n,int arr[]){
    int i;
    for (i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void mergeArray(int *arr, int left, int mid, int right)
{
    int i = left, j = mid + 1, x = 0;
    int merge[right-left + 1];
    while (i <= mid and j <= right)
    {
        if (arr[i] <= arr[j])
        {
            merge[x++] = arr[i++];
        }
        else
        {
            merge[x++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        merge[x++] = arr[i++];
    }
    while (j <= right)
    {
        merge[x++] = arr[j++];
    }
    int n=sizeof(merge)/sizeof(int);
   

    for (int g=0,h=left; g<n; g++,h++)
    {
        arr[h] = merge[g];
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = left+( right-left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    mergeArray(arr, left, mid, right);
}
