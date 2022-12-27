#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout << "Enter lenght of charechter : "<<endl;
    cin>>n;
    char a[n];
    cout << "Enter your String : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    char b[n];
    char c[n];

    for(i='A';i<='Z';i++){

        for(i='a';i<='z';i++){

            for(i=0;i<n;i++){

                if(a[i]==b[i]){

                    cout <<a[i]<<" ";
                }
            }
            if(a[i]==c[i]){

                cout <<a[i]<<" ";
            }
        }
    }
return 0;
  }