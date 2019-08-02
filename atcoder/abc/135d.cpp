#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string s;
    cin >> s;
    ll dp[15][110000] = {};

    dp[0][0] = 1;
    rep(i, s.size()){
        if(s[i]=='?'){
            rep(j, 13){
                rep(num, 10){
                    dp[(j*10+num)%13][i+1] += dp[j][i];
                    dp[(j*10+num)%13][i+1] %= MOD;
                }
            }
        }else{
            int num = s[i] - '0';
            rep(j, 13){
                dp[(j*10+num)%13][i+1] += dp[j][i];
                dp[(j*10+num)%13][i+1] %= MOD;
            }
        }
    }
    cout << dp[5][s.size()] << endl;
    return 0;
}