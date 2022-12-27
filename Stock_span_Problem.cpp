#include "bits/stdc++.h"
using namespace std;
void Stock_span(int n,int price[]){
    int i,j;
    vector<int>v;
    for(i=0; i<n; i++){
        int count=0;
        for (j=i; j>=0; j--){
            if(price[i]>=price[j]){
                count++;
            
            }
            else{
                break;
            }
        }
        v.push_back(count);
    }
    cout << "List of span day : "<<endl;
    for (auto val:v){
        cout <<val<<" ";
    }
    /*
    Other Solution With Good Understanding 
  
      bool transac=false;
        for(int i=0;i<n;i++){
        int buy=i,sell=i;
   
        while(i<n-1 && price[i]>=price[i+1]) i++;
        buy=i;
    
        while(i<n-1 && price[i]<=price[i+1]) i++;
        sell=i;
     
        if(sell-buy>0){
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
            transac=true;
        }
    }
    if(transac==false){
        cout<<"No Profit";
        
    }
    cout<<endl;
}
    */
    /*
    Other Solution 
     vector<int> v(n,1);
      int count,j;
      for(int i=1;i<n;i++){
       j=i;
       count=0;
          while(j>=0 && price[j]<=price[i]){
              count+=v[j];
              j-=v[j];
          }
          v[i]=count;
       }
      return v;
   
    */
}
int main(){
    int i,n;
    cout << "Enter Number of Element : "<<endl;
    cin>>n;

    int price[n];
    cout << "Enter all day price: "<<endl;
    for(i=0; i<n; i++){
        cin>>price[i];
    }

    Stock_span(n,price);
    return 0;
}