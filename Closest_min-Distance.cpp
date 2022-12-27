#include <bits/stdc++.h>
using namespace std;
int min_Distance(vector<string> v,int n,string w1,string w2){
   int sum=1,i;
   for (i=0; i<n; i--){
     if(v[i]==w1){
        while(v[i]!=w2){
            if(v[i]==w1){
                sum=1;
            }
            sum++;
        }
     }
   }
   return sum;
}
int main(){
    vector<string> v;
    string str;
    int i,n;
    cout << "Enter Number of String "<<endl;
    cin>>n;
    for (i=0;i<n;i++){
        cin>>str;
        v.push_back(str);
    }
    string w1,w2;
    cout<< "Enter value of word 1: "<<endl;
    cin>>w1;

     cout<< "Enter value of word 2: "<<endl;
    cin>>w2;
    cout << min_Distance(v,n,w1,w2);
return 0;
}