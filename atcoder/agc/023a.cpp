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
    int n;
    cin >> n;
    ll a[n+1];
    a[0] = 0;
    rep(i, n){
        ll tmp; cin >> tmp;
        a[i+1] = a[i] + tmp;
    }
    map<ll, ll> m;

    rep(i, n+1){
        m[a[i]]++;
    }

    ll ans = 0;
    for (auto mm : m){
        ans += mm.second * (mm.second-1)/2;
    }

    cout << ans << endl;
    return 0;
}
