#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;
vector<long long> missing_Second(int a[],int b[],int n,int m){
    vector<long long> v;
	    	unordered_set<long long> mp;
	    	int i,j,f=0;
	    	for (i=0; i<m; i++){
	    	    mp.insert(b[i]);
	    	}
	    	for(j=0; j<n; j++){
	    	    if(mp.find(a[j])==mp.end()){
	    	        v.push_back(a[j]);
	    	    }
	    	}
	    	return v;
}
int main(){
    int i,j,n,m;
    cout << "Enter Size fisrt array 1: "<<endl;
    cin>>n;
    cout << "Enter Size Second array 2: "<<endl;
    cin>>m;
    int a[n],b[m];
    cout << "Enter Element of array 1: "<<endl;
    for (i=0; i<n; i++){
        cin>>a[i];
    }
     cout << "Enter Element of array 2: "<<endl;
    for (j=0; j<m; j++){
        cin>>b[j];
    }
    vector<long long>v =missing_Second(a,b,n,m);

    cout << "Missing in Second array : "<<endl;
    for (auto val:v){
        cout <<val<<" ";
    }
    return 0;
}