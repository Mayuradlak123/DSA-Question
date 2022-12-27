#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
     
    int editDistance(string s, string t) {
        int n = s.size();
        int m = t.size();
        int dp[n+1][m+1];
        
        for(int i = 0;i<=n;i++){
            dp[i][0] = i;
        }
        
        for(int i = 0;i<=m;i++){
            dp[0][i] = i;
        }
        
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(s[i-1]==t[j-1]) {
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    int insert = 1 + dp[i][j-1];
                    int delete1 = 1 + dp[i-1][j];
                    int replace = 1+ dp[i-1][j-1];
                    
                    dp[i][j] = min(insert,min(delete1,replace));
                }
            }
        }
        return dp[n][m];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends