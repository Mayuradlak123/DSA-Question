#include "bits/stdc++.h"
using namespace std;

int main (){
    int i,k,j,n1,n2,n3;
    cout << "Enter size of array 1 : "<<endl;
    cin>>n1;
    cout << "Enter size of array 2 : "<<endl;
    cin>>n2;
    cout << "Enter size of array 3 : "<<endl;
    cin>>n3;
    int arr1[n1],arr2[n2],arr3[n3];
    cout << "Enter Element of array "<<endl;
    for (i=0; i<n1; i++){
        cin>>arr1[i];
    }
    cout << "Enter Element of array 2 : "<<endl;
     for (i=0; i<n2; i++){
        cin>>arr2[i];
    }
    cout << "Enter Element of array 3 :"<<endl;
     for (i=0; i<n3; i++){
        cin>>arr3[i];
    }
    unordered_set<int>s;
    for (i=0; i<n1; i++){
        for (j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                s.insert(arr1[i]);
            }
        }
    }
    cout << "Comman Element in 3 array : "<<endl;
    for (k=0; k<n3; k++){
        if(s.find(arr3[k])!=s.end()){
            cout << arr3[k]<<" ";
        }
    }

    return 0;

}