#include <bits/stdc++.h>
using namespace std;
vector <int> merge_k_sorted_array(int n,vector<vector<int>>arr){
            vector<int>v;
             int i,j;
        for (i=0; i<n; i++){
            for (j=0; j<arr[i].size(); j++){
                v.push_back(arr[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v;
}
int main(){
    int n,i,j;
    cout << "Enter size of array : "<<endl;
    cin>>n;
//   cout << "Enter ELement of array : "<<endl;
   vector<vector<int>>v(n,vector<int>(n,0));
cout << "Enter vector Element : "<<endl;
   for(i=0;i<n;i++){
    for (j=0; j<n; j++){
        cin>>v[i][j];
    }
   }
   cout << "After merge k array : "<<endl;
    vector<int>vec=merge_k_sorted_array(n,v);
    for(i=0;i<vec.size();i++){
            cout << vec[i]<< " ";
    }
    return 0;
} 