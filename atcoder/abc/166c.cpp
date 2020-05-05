#include <bits/stdc++.h>
using namespace std;
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

vector<int> edges[100005];

int main(){
    int n, m;
    cin >> n >> m;
    int h[n];
    rep(i, n) cin >> h[i];
    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        edges[a].emplace_back(b);
        edges[b].emplace_back(a);
    }

    int ans = 0;
    rep(i, n){
        bool ok = true;
        for (auto ei : edges[i]){
            if(h[ei] >= h[i]) ok = false;
        }
        if(ok) ans++;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}