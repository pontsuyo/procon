#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18


ll dps(string s){
    ll dp[32][2][2];
    rep(i, 32)rep(j, 2)rep(k, 2) dp[i][j][k]=0;

    dp[0][0][0] = 1;

    rep(i, s.size()){
        rep(j, 2) rep(k, 2){
            int si = s[i]-'0';          
            rep(d, 10){
                int ni=i+1, nj=j, nk=k;
                if(d==4 || d==9) nk = 1;
                if(nj==0){
                    if(d < si) nj=1;
                    if(d > si) continue;
                }

                dp[ni][nj][nk] += dp[i][j][k];
            }
        }
    }
    return dp[s.size()][0][1] + dp[s.size()][1][1];
}

int main(){
    string a, b;
    cin >> a >> b;

    cout << dps(b) - dps(to_string(stoll(a)-1)) << endl;

    return 0;
}