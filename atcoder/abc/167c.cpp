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
    int n, m, x;
    cin >> n >> m >> x;

    int c[n], a[n][m];
    rep(i, n){
        cin >> c[i];
        rep(j, m) cin >> a[i][j];
    }

    int ans = INF;

    rep(iii, 1<<n){
        int ii = iii;
        int num[n], aa[m];
        rep(j, n){
            num[j] = ii%2;
            ii >>=1;
        }
        rep(i, m) aa[i] = 0;

        int tmp = 0;
        rep(i, n) if(num[i]==1){
            tmp += c[i];
            rep(mi, m){
                aa[mi] += a[i][mi];
            }
        }

        bool ok = true;
        rep(mi, m){
            if(aa[mi] < x) ok = false;
        }
        if(ok) chmin(ans, tmp);
    }

    if(ans==INF){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

    // printf("%d\n", N);
    return 0;
}