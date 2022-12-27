#include<bits/stdc++.h>
using namespace std;
void Print_Vector(vector<int > &v,int i){
    cout << " Size of Vector : "<<v.size()<<endl;

    cout << "Iteration of Vector: "<<endl;
    for(i=0;i<v.size();i++){
        cout <<v[i]<<" ";
    }
    
}
void Delete_Vector(vector<int> &v,int i){
    cout << "\nBlank Vector : "<<endl;
    for(i=0;i<v.size();i++){
        v.pop_back();
    }
}

int main(){
    vector<int> v;
    int i,n,x;
    cout << "Enter size of vector: "<<endl;
    cin>>n;
   cout << "Enter element of vector: "<<endl;
    for(i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    
    Print_Vector(v, i);

    Delete_Vector(v,i);
    return 0;
}