#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
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
#define LLINF (ll) 3e18

int main(){
    int t;
    cin >> t;
    rep(ti, t){
        int x, y, p, q;
        cin >> x >> y >> p >> q;
        ll C = (x+y)*2;
        ll D = p+q;
        ll t = LLINF;
        for (ll a = x; a < x+y; a++){
            for (ll b = p; b < p+q; b++){
                auto r = crt({a, b}, {C, D});
                if(r.second == 0) continue;
                chmin(t, r.first);
            }
        }
        if (t==LLINF) cout << "infinity" << endl;
        else cout << t << endl;
    }
    return 0;
}