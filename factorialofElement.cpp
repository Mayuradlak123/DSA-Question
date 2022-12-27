#include <bits/stdc++.h>
using namespace std;

vector<long long> largeFactorial(vector<int> v){
    long long i=0,j=0,fact=1;
    vector<long long> ans;
    while(j<v.size()){
    for (i=1; i<=v[j]; i++){
        fact*=i;
    }
    ans.push_back(fact);
    fact=1;
    j++;
    }
    return ans;
}
int main (){
  int i,n;
  cout << "Enter Size of array : "<<endl;
  cin>>n;
  vector<int> v(n);
  cout << "Enter element for find Factorial : "<<endl;
  for (i=0; i<n; i++){
    cin>>v[i];
  }
  vector<long long> ans=largeFactorial(v);
  cout << "Factorial of Given array element : "<<endl;
  for (auto i:ans){
    cout << i<< " ";
  }
  return 0;
}