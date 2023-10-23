#include "bits/stdc++.h"
using namespace std;
string longestSuffix(vector<string> str){
    int i,n=str.size();
    sort(str.begin(),str.end());
    string start=str[0],end=str[n-1];
    int j=start.size()-1,k=end.size()-1;
    string ans="";
    for (i=0; i<n; i++){
      if(start[j]==end[k]){
        ans+=start[j];
        j--;
        k--;       
      }
    }
    reverse(ans.begin(),ans.end());
   return ans;
}
int main (){
    int i,n;
    vector<string> str;
    string t;
    cout << "Enter size of array : "<<endl;
    cin>>n;
    cout << "Enter element of vector"<<endl;
    for (i=0; i<n; i++){
        cin>>t;
        str.push_back(t);
    }
    string suffix =longestSuffix(str);
    cout << "Longest comman Suffix : "<<suffix<<endl;
    return 0;
}