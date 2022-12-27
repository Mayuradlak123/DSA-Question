#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    
	string s,t;
	// This Program is DP Question 
	
	//You have given A string and test
	
	// you need to find this test string you print index of this stin
	
	cout << "Enter an String : "<<endl;
	getline(cin,s);
	
// 	Example s= AABAACAADAABAABA

	cout << "Enter word for check: "<<endl;
     
	
	cin>>t;
// 	t=AABA 

     int n=s.size();
     
    int i,j,m=t.size();
    for(i=0;i<n;i++){
        
    	if(s.substr(i,m)==t){
    	    
    		cout <<i<<" ";
    	}
    	// In this String available 0th index 9th index and 12th index 
    }
    return 0;
}