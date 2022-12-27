#include <bits/stdc++.h>
using namespace std;
 list<int> siftAt_end (int n,int a[]){
    list<int> list;
    for (int i=0; i<n; i++){
        if(a[i]<0){
            list.push_back(a[i]);
        }
        else{
list.push_front(a[i]);
        }
    }
    return  list;
 }
int main(){
    int i,n;
    cout  <<" Enter Number of Element :"<<endl;
    cin>>n;
    int a[n];
    cout << "Enter Element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>a[i];
    }
    cout << "After Shift Element : "<<endl;
    list<int> list=siftAt_end(n,a);
    for (auto i=list.begin(); i!=list.end(); i++){
        cout <<*it<" ";
    }
    return 0;
}