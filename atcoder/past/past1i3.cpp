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

ll dp[1<<11];

int main(){
    int n, m;
    cin >> n >> m;

    rep(j, 1<<11) if(j!=0) dp[j] = LLINF;

    rep(mi, m){
        string s;
        int c;
        cin >> s >> c;

        int v = 0;
        rep(ni, n){
            if(s[ni]=='Y') v += (1<<ni);
        }

        rep(ni, 1<<n){
            dp[ni|v] = min(dp[ni|v], dp[ni] + c);
        }
    }

    ll ans = dp[(1<<n)-1];
    if(ans != LLINF){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}