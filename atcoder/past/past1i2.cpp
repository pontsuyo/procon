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

ll dp[1<<12][1005];

int main(){
    rep(i, 1<<12) rep(j, 1005) if(i!=0)dp[i][j]=LLINF;

    int n, m;
    cin >> n >> m;

    rep(i, m){
        string s;
        ll c;
        cin >> s >> c;

        int ss = 0;
        rep(j, s.size()){
            if(s[j]=='Y'){
                ss += 1<<j;
            }
        }

        rep(j, 1<<n) dp[j][i+1] = dp[j][i];
        rep(j, 1<<n){
            chmin(dp[j|ss][i+1], dp[j][i]+c);
        }

    }

    rep(i, m) {
        rep(j, 1<<n) cout << dp[j][i] << " ";
        cout << endl;
    }

    ll ans = dp[(1<<n) -1][m];
    if(ans!=LLINF){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
    // printf("%d\n", N);
    return 0;
}