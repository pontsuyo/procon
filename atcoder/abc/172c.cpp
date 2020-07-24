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
    int n, m, k;
    cin >> n >> m >> k;
    ll a[n], b[m];
    rep(i, n) cin >> a[i];
    rep(i, n-1){
        a[i+1] += a[i];
    }
    rep(i, m) cin >> b[i];
    rep(i, m-1){
        b[i+1] += b[i];
    }

    int ans = upper_bound(b, b+m, k) - b;
    // printf("a: %d, b: %d\n", 0, ans);
    rep(i, n){
        if(a[i]>k) break;
        int tmp = upper_bound(b, b+m, k-a[i]) - b;
        // printf("a: %d, b: %d\n", i+1, tmp);
        chmax(ans, tmp+i+1);
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}