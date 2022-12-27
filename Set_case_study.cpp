#include<bits/stdc++>
#include <set>
using namespace std;
class Set_dsa{
    public:
    void Input(){
        int i,n;
        set<int> s;
        s.insert(10);
        for (auto val : s){
            cout << val<<" ";
        }
    }
};
int main(){
    Set_dsa object;
    object.Input();
}