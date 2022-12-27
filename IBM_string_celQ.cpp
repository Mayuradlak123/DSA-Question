#include<bits/stdc++.h>
using  namespace std;

int main(){
     
     int i,n;

    cout << "Enter size of array : "<<endl;

    cin>>n;

    string m,y;
    

    cout<< "Enter String: "<<endl;
   
    for(i=0;i<n;i++){
        cin>>m[i];
    }
    for(i=0;i<n;i++){
        cin>>y[i];
    }

    sort(m.begin(),m.end());
    sort(y.begin(),y.end());
    
    for(i=0;i<n;i++){
        cout <<m[i]<<"-"<<y[i]<<endl;
    }
    
    return 0;
}