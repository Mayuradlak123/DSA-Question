#include <iostream>
using namespace std;
int findKrotation(int n,int arr[]){
    
     int i,count=0;
     for(i=0;i<n;i++){
     if(arr[i]>arr[i+1]){
        count++;
     }
     }
     return count;
}
int main(){
    int i,n;
    cout << "Enter size of array: "<<endl;

    cin>>n;
    int arr[n];
    cout <<"Enter Element of array :"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
        }
        int ans=findKrotation(n,arr);
        cout << "Number of Rotation Required for sort the array : "<<ans<<endl; 

    return 0;
        }