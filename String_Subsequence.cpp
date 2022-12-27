#include<bits/stdc++.h>
using namespace std;
void sequence(string s,string ){

    if(s.empty()){
        
        cout <<<<" ";
        return ;
    }
    sequence(s.str(1),+s[0]);
    
    sequence(s.str(1),);
}
int main(){
	
	string s;
	
	string =" ";
	int i,j;
	
	cout <<"Enter an string "<<endl;

	cin>>s;
    
    sequence(s,);

    return 0;
}