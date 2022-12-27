
#include <bits/stdc++.h>

using namespace std;
void DNF(int a[],int n){
    
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
       cout<< "After Sorting: "<<endl;
       for(int i=0;i<n;i++){
           cout <<a[i]<<" ";
       }
       
    
}
int main()
{
    int i,n;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    int a[n];
    cout << "Enter 0,1,2 for sorting : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    DNF(a,n);
    
    return 0;
}
