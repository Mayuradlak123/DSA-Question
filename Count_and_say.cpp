#include "bits/stdc++.h"
using namespace std;
string countAndSay(int n) {
        
        string s = "1";
        
        for (int x = 1; x < n; ++x) {
            
            string new_s;
                   
            for (int i = 0; i < s.length(); ++i) {
                
                int streak = 1;  
                
                while (i + 1 < s.length() && s.at(i + 1) == s.at(i)) {
                    
                    streak++;
                    i++;
                }
                
                new_s.push_back('0'+streak);
                new_s.push_back(s.at(i));
            }     
            
            s = new_s;
        }
     
       return s; 
    }
int main()
{
    int n;

    cout << "Enter an int : " << endl;

    cin >> n;
    cout << countAndSay(n) << endl;
}