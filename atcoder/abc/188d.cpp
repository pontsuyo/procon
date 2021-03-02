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

int main(){
    int n, C;
    cin >> n >> C;

    vector<P> p;

    rep(i, n){
        int a, b, c;
        cin >> a >> b >> c;
        p.emplace_back(P(a, c));
        p.emplace_back(P(b+1, -c));
    }

    sort(p.begin(), p.end());

    ll ans=0, tsum = 0;
    rep(i, p.size()-1){
        int d = p[i+1].first - p[i].first;
        tsum += p[i].second;
        ans += min(tsum, (ll)C)*d;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}