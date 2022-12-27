#include<bits/stdc++.h>
using namespace std;

void get_Permutaion(string str,int start,int end){
    if(start==end){
        cout <<str <<" ";
    }
    for (int i=start; i<=end; i++){
        swap(str[start],str[i]);
        get_Permutaion(str,start+1,end);
        swap(str[start],str[i]);
    }
}
int main(){
    string s;
    int n,i;

    cout << "Enter String : "<<endl;
    cin>>s;

    n=s.size();
cout << "All Permutation of Given String : "<<endl;
     get_Permutaion(s,0,n-1);
    return 0;
}