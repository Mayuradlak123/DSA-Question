#include "bits/stdc++.h"
using namespace std;
int Minimum_Swap(vector<int> &v){

 vector<pair<int,int>> vec;
 int n=v.size(),i;

	    for( i = 0;i<n;i++)
	    {
	        vec.push_back({v[i], i});
	    }

	    sort(vec.begin(), vec.end());
        
	    int count = 0;

	    for( i = 0;i<vec.size();i++)
	    {
	        if(vec[i].second==i)
	        {
	            continue;
	        }
	        else
	        {

	            swap(vec[i], vec[vec[i].second]);
	            i--;
	            count++;
	        }
	    }
	    return count;
}
int main(){

    int n,i,temp;
    cout << "Enter size of array : "<<endl;
    
    cin>>n;
    vector<int>v;
    
    cout << "Enter n element of array : "<<endl;

    for (i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }

    cout <<"Minimum Swap to sort : "<<Minimum_Swap(v);
    return 0;
}