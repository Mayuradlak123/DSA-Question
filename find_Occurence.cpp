#include <bits/stdc++.h>
using namespace std;
vector<int> findOccurence(string str){
    int i;
    vector<int> v;
     map<char,int>mp;
     for(i=0; i<str.size(); i++){
        mp[str[i]]++;
     }
     for(auto val:mp){
        v.push_back(val.second);
     }
    //  cout << "Answer in Key and value pair : "<<endl;
    //  for (auto val:mp){
    //     cout << "Charechter :"<<val.first<<" Occurence: "<<val.second<<" "<<endl;
    //  }
    return v;
}
int main (){
    string str;
    cout << "Enter An String : "<<endl; 
    getline(cin,str);
    cout << "Given String is : "<<str<<endl;
    vector<int> v= findOccurence(str);
    cout << "Occurence of Charecter : "<<endl;
    for (auto val:v){
        cout <<val<< " ";
    }
        return 0;
}