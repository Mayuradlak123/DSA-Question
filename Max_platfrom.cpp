#include <bits/stdc++.h>
using namespace std;
int max_Platform(int arr[],int dep[],int n){
    int count=1,max_plt=1;
    int i=1,j=0;
    sort(arr, arr+n);
    sort(dep,dep+n);
    while(i<n and j<n){
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }
        else{
            j++;
            count--;
              }
              max_plt=max(count,max_plt);
    }
    return max_plt;
}
int main(){
    int i,j,n;
    cout << "Enter Number of Arrival Train : "<<endl;
    cin>>n;
    int arr[n],dep[n];
    cout << "Enter time of Arrival : "<<endl;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter Departure Time of train "<<endl;
    for (j=0;j<n;j++){
        cin>>dep[j];
    }
    int result=max_Platform(arr,dep,n);
    cout <<"Minimum Platfrom Required :"<<result<<endl;
return 0;
}