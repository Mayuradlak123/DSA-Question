#include<bits/stdc++.h>
using namespace std;
int longest_Repeting_Sub(string str){

     int n=str.length(), los[n+1][n+1];
		    
		    for(int i=0;i<=n;i++){
	
    	        for(int j=0;j<=n;j++){
	
    	            if(i==0||j==0){
		 
                        los[i][j]=0;
		            }
		            else if(str[i-1]==str[j-1]&&i!=j){
		                los[i][j]=1+los[i-1][j-1];
		            }
		            else{
		                los[i][j]=max(los[i-1][j],los[i][j-1]);
		            }
		     }
     }
		        return los[n][n];	
}

int main(){
    string str;
    cin>>str;
    cout << "Longest Repeting Subseqeunce length : "<<endl;
    
    cout <<longest_Repeting_Sub(str);
    return 0;
}