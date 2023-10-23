#include "bits/stdc++.h"
using namespace std;
long long countP=0;

void countPermutation(string str,int index,int n){
    if(index==n){
        countP++;
        // cout<<str<<" ";
    }
   for (int i=index; i<n; i++){
    swap(str[index],str[i]);
    countPermutation(str,index+1,n);
    swap(str[index],str[i]);
   }
}
int main (){
    string str;
    cout << "Enter string : "<<endl;
    cin>>str;
    countPermutation(str,0,str.length());
printf("%d Number of permutations : ", countP);
    return 0;
}
