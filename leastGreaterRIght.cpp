#include <iostream>
#include <vector>
#include<set>
using namespace std;
vector <int> findLeatGreater(vector<int> v){
    int i;
    vector<int> v;
  set<int> s;
          set<int>s;
            for(int i=n-1;i>=0;i--)
            {
            auto val=s.upper_bound(arr[i]);
            if(val!=s.end())
            {
                ans.push_back(*val);
            }else{
                ans.push_back(-1);
            }
            s.insert(arr[i]);
            }
            reverse(ans.begin(),ans.end());

            return ans;
    }
    int main(){
 int i,n;
 cout << "Enter size of array : "<<endl;
 cin>>n;
 cout << "Enter element of array : "<<endl;
 vector<int >v(n),ans;
 for (i=0; i<n; i++){
    cin>>v[i];
 }
 ans=findLeatGreater(v);
 return 0;
}