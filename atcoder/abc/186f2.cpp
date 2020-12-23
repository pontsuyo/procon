#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    int h, w, m;
    cin >> h >> w >> m;
    vector<int> a(w, h), b(h, w);
    
    rep(i, m) {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        chmin(a[y], x);
        chmin(b[x], y);
    }

    ll ans = 0;
    rep(y, b[0]) ans += a[y];
    rep(x, a[0]) ans += b[x];

    fenwick_tree<int> t(w);
    rep(y, b[0]) t.add(y, 1);

    vector<vector<int>> ends(h+1);
    rep(y, b[0]) ends[a[y]].push_back(y);
    rep(x, a[0]){
        for (int y : ends[x]) t.add(y, -1);
        ans -= t.sum(0, b[x]);
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}