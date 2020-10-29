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
#define MAX_N 100000


int main(){
    int n, k;
    cin >> n >> k;
    int p[n], c[n];
    rep(i, n) cin >> p[i], p[i]--;
    rep(i, n) cin >> c[i];

    ll ans = -LLINF;
    rep(ni, n){
        int si = ni;
        ll csum = 0;
        int ccnt = 0;

        while(true){
            ccnt++;
            csum += c[si];
            si = p[si];
            if(si == ni) break;
        }

        ll path = 0;
        int cnt = 0;

        while(true){
            cnt++;
            path += c[si];

            if(cnt > k) break;

            int num = (k-cnt)/ccnt;
            ll score = path + max(0ll, csum) * num;
            chmax(ans, score);

            si = p[si];
            if(si == ni) break;
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}