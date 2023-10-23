#include "bits/stdc++.h"
using namespace std;
string first_Repeated_word(string a[], int n){
     int j,i,count=0,maxCount=0;
    string ans="";
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>=2){
            ans=a[i];
            break;
        }
        count=0;
    }
    return ans;

 /* 
 O(log n) Time Complexity Approach
  int i,temp;
   unordered_map<string,int> mp;
    for (i=0; i<n; i++){
        mp[a[i]]++;
    }
    for (auto x:mp){
        if(x.second>=2){
           return x.first;
        }
    }*/
   
}
int main()
{
    int i, n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    string a[n];
    cout << "Enter word of array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string ans=first_Repeated_word(a,n);
    cout <<"First Reapiting word : "<<ans<<" ";
    return 0;
}