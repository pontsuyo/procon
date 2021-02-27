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
    double x_, y_, r_;
    cin >> x_ >> y_ >> r_;

    ll x = x_ * 10000;
    ll y = y_ * 10000;
    ll r = r_ * 10000;
// printf("%lld %lld %lld\n", x, y, r);

    ll xl = (x-r)/10000 * 10000;
    ll xr = (x+r)/10000 * 10000;
// printf("%lld %lld %lld\n", xl, xr, r);

    ll ans = 0;
    for (ll xi = xl; xi <= xr; xi += 10000){
        ll dx = xi-x;
        ll yt = y + sqrt(r*r-dx*dx);
        yt = yt/10000 * 10000;
        ll yu = y - sqrt(r*r-dx*dx);
        if(yu%10000>0) yu += 10000-yu%10000;
        ans += yt/10000 - yu/10000 +1;
        // printf("%d %d %d\n", xi, yu, yt);
        
    }
    

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}