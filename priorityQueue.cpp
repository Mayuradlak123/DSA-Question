#include "bits/stdc++.h"
using namespace std;

int main (){
   int i,temp,n;
   cout << "Enter n  :"<<endl;
   cin>>n;
   priority_queue<int>pq;
   cout << "Enter element of pq: "<<endl;
for (i=0; i<n; i++){
    cin>>temp;
    pq.push(temp);
}
cout  <<"Itration of Priority Queue :"<<endl;
cout <<"Top Element of Queue: "<<pq.top()<<endl;
while (!pq.empty()){
   cout <<pq.top()<< " ";
pq.pop();
}
   return  0;
}