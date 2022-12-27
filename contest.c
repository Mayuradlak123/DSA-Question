#include <stdio.h>
#include<iostream>
int main()
{
    int i = 3;
    printf("%d", (++i)++);

    int j,n=5;
    int arr[n]={5,4,3,2,1};
    for (j=0; j<n-2; j++){
    arr[j]=arr[j]-arr[j+1];
    // printf("%d",arr[j]);
    }
    int sum=0;
    for (j=1; j<=157; j++){
        sum+=j;
    }
    printf("%d",sum/157);
    return 0;
}