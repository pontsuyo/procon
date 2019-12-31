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

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    rep(i, n) rep(j, m) cin >> a[i][j];

    ll ans = 0, tmp = 0;
    rep(i, m){
        rep(j, m){
            if(i>=j) continue;
            tmp = 0;
            rep(k, n){
                tmp += max(a[k][i], a[k][j]);
            }
            chmax(ans, tmp);
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}