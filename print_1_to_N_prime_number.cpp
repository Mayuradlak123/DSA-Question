// This Question is most Important 
//First time when i see this q 
//i'm anable to solve this question 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,flag=0,i,j;
vector<int>v;
    cout << "Enter an Number : "<<endl;
    cin>>n;
    for(i=1;i<n;i++){
        flag=0;
        for(j=2;j<i-1;j++){
            if(i%j==0){
            flag=1;
            break;
        }
      }
      if(flag==0){
          // cout <<i << " ";
          v.push_back(i);
      }
    }
    while (v.empty()){
      cout <<v[i];
      i++;
      v.pop_back();
    }
    {
      
    }
    
    cout<<v[2]<<endl;

    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,i,m;
    cin>>num;
    for(i=1;i<=num;i++){
        m=0;
        int n=i;
      for(int j=2;j<=n-1;j++){
          if(n%j==0){
            //   cout <<i<< " ";
            m=1;
            break;
          }
          
      }
      if(m==0){
          cout <<i<<" ";
      }
    }
    return 0;
}*/