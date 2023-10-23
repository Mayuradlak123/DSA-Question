#include "bits/stdc++.h"
using namespace std;
int fibSum(int n){
      if(n<=1){
        return 1;
      }
    return fibSum(n-1)+fibSum(n-2);
}
int main (){
    int n;
    cout << "Enter n: "<<endl;
    cin>>n;
    
 cout <<fibSum(n) <<" ";
    return 0;
}
/*

	if (n == 1){
		return 1;
    }
    if(n==0){
        return 0;
    }
	return fibSum(n - 1) + fibSum(n - 2);
*/