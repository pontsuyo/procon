#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s, t;
    cin >> s >> t;
    string dp[s.size()+1][t.size()+1] = {""};
    
    for(int i=1;i<=s.size();++i){
        for(int j=1;j<=t.size();++j){
            if(s[i-1]==t[j-1]){
                dp[i][j] = dp[i-1][j-1] + s[i-1];
            }else{
                if(dp[i][j-1].size() > dp[i-1][j].size()){
                    dp[i][j] = dp[i][j-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
    printf("%s\n", dp[s.size()][t.size()].c_str());
    // cout <<  dp[s.size()][t.size()] << endl;
    return 0;
}