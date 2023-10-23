#include "bits/stdc++.h"
using namespace std;
int maxPeople(int n){
    int i,count=0,sum=0;
    for (i=1; i*i<=n; i++){
        sum+=(i*i);
        if(sum<=n){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
int main (){
    int n;
    cout << "Enter n : "<<endl;
    cin>>n;
    printf("Maximum people killed by n is : %d",maxPeople(n));
    return 0;
}