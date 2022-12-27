#include<bits/stdc++.h>
using namespace std;
void taking_Input(){

    int n,m,i;
    cout << "This is Second Function  Which taking\n two array and Insert into Map "<<endl;
    
    cout << "Enter size of array 1: "<<endl;
    
    cin>>n;
    
    cout << "Enter size of array 2: "<<endl;
    
    cin>>m;
    if(n==m){
        
    
    int arr1[n];
    int arr2[m];
    cout << "Enter Element of array 1: "<<endl;
    
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout << "Enter Element of array 2: "<<endl;
    
    for(i=0;i<m;i++){
        cin>>arr2[i];
    }
    map<int,int> Map;
    for(i=0;i<n;i++){
        Map.insert({arr1[i],arr2[i]});
    }
    cout << "Iterating Map : "<<endl;
    for(auto &p: Map){
        cout << p.first<< " "<<p.second<<endl;
    }
}
    else{
        cout << "Number of key and value should be same : "<<endl;
    }
    
}

int main(){
    //This Array is Static Map
    cout << "Your Stored Value int map : "<<endl;    
    map<int,string> m;
    
    m.insert({1,"Mayur"});
    
    m.insert({2,"Vijay"});
    
    m.insert({3,"Vishal"});
    
    m.insert({4,"Raj"});
    
    m.insert({5,"Varun"});
    
    m.insert({6,"Mahendra"});
    
    map<int ,string> ::iterator i;
    
    for(i=m.begin();i!=m.end();++i){
        
        cout<<i->first<<" "<<i->second<<endl;
    }
    taking_Input();
    return 0;
}