#include<bits/stdc++.h>
using namespace std;
void str_Next_parmutation(int arr[],int n){
    
//   int s1=-1 ;
int i,j;

        for( i=n-2 ; i>=0 ; i--)
        {
            if(arr[i]<arr[i+1])
            {
                for( j=n-1 ; j>=0 ; j--)
                {
                    if(arr[j]>arr[i])
                    {
                        swap(arr[i],arr[j]) ;
                        reverse(arr,arr+n) ;
                        
                    }
                }
            }
        }
        cout <<"Next Permutation: "<<endl;
        
       for(i=n-1;i>=0;i--){
        cout <<arr[i]<<" ";
       }
        // return arr ;
    }
int main(){
    int n,i;
    
    cout <<" Enter size of Element : "<<endl;

    cin>>n;

    int arr[n];
    
   cout <<"Enter Element of Array : "<<endl;

    for(i=0;i<n;i++){

        cin>>arr[i];
    }
    str_Next_parmutation(arr,n);
    
    return 0;
}