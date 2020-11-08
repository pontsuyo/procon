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
    int h, w, n, m;
    cin >> h >> w >> n >> m;

    int a[n], b[n], c[m], d[m];

    rep(i, n) cin >> a[i] >> b[i];
    rep(i, n) a[i]--, b[i]--;
    rep(i, m) cin >> c[i] >> d[i];
    rep(i, m) c[i]--, d[i]--;


    bool tate[h][w], yoko[h][w];
    rep(hi, h) rep(wi, w) tate[hi][wi] = false;
    rep(hi, h) rep(wi, w) yoko[hi][wi] = false;

    rep(ni, n){
        
    }

    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}