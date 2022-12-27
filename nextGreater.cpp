/**
 * The Problem Statement is you have given array 
 * and you  need to find the next greater Element for every element 
 * if not any greater element so push -1 in vector 
 * Example is : Input- N = 5, arr[] [6 8 0 1 3] , Output : 8 -1 1 3 -1
*/
#include <iostream>
#include <vector>
using namespace std;
vector<long long> nextGreater(vector<long long>arr){
    int i,j,n=arr.size();
    vector<long long> v;
   
        for ( i=0; i<n; i++){
            for (j=i; j<=n; j++){
                if(arr[j]>arr[i]){
                    v.push_back(arr[j]);
                    break;
                }
                if(j==n-1){
                    v.push_back(-1);
                    break;
                }
            }
        }
        return v;
    }
int main (){
    int n,i;
   cout << "Enter Size of array : "<<endl;
cin>>n;
   vector<long long >arr(n);

  cout << "Enter "<<n<<" Element of array : "<<endl;
  for (i=0; i<n; i++){
    cin>>arr[i];
  }
  vector<long long > ans=nextGreater(arr);
  cout <<"Next Greater Element for every element : "<<endl;
  for (auto j:ans){
    cout <<j<<" ";
  }
  return 0;

}