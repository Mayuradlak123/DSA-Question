#include<bits/stdc++.h>
using namespace std;

int main (){
    int i,n,temp,k;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    priority_queue<int> q;
    cout << "Enter Element : {n}"<<endl;
   for(i=0; i<n;i++){
    cin>>temp;
    q.push(temp);
   }
cout << "Enter value of k: "<<endl;
cin>>k;
cout << "Kth Samllest Element is : "<<endl;
for (i=0; i<=k; i++){
    int ans=q.top();
 
    if(i==k){
        cout <<q.top()<<endl;
    }
       q.pop();
}
   return 0;
}