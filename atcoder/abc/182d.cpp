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
    int n;
    cin >> n;
    ll a[n], b[n];
    rep(i, n) cin >> a[i];

    b[0] = a[0];
    rep(i, n-1) b[i+1] = b[i] + a[i+1];

    ll s[n], ma[n];
    s[0] = b[0];
    ma[0] = a[0];
    rep(i, n-1){
        s[i+1] = s[i] + b[i+1];
    }
    ll tmp = a[0], tma = a[0];
    ma[0] = a[0];
    rep(i, n-1){
        if(tma < tmp + a[i+1]){
            tma = tmp + a[i+1];
        }
        ma[i+1] = tma;
        tmp = tmp + a[i+1];
    }


    ll ans = max(0ll, a[0]);
    for (int i = 1; i < n-1; i++)
    {
        // printf("%d %d\n", ans, s[i]+ma[i+1]);
        chmax(ans, s[i]+ma[i+1]);
    }
    chmax(ans, s[n-1]);
    

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}