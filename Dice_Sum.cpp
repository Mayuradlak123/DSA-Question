#include<iostream>
using namespace std;

int Accenture(int i,int j,int k,int count){
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            if(i+j==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int i,j,k,count=0;
    cout <<"Enter Possible sum of Dice "<<endl;
    cin>>k;
    cout <<"Total possible sum of twich dice "<<Accenture(i,j,k,count);
    return 0;
}