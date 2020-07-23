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
    int n, k;
    cin >> n >> k;
    int t[n][k];
    rep(i, n) rep(j, k) cin >> t[i][j];

    int nl = 1;
    rep(i, n) nl *= k;

    bool ok = false;
    rep(ni, nl){
        int tt[n];
        int nni = ni;
        rep(i, n){
            tt[i] = nni%k;
            nni /= k;
        }

        int x = 0;
        rep(i, n){
            x ^= t[i][tt[i]];
        }
        if(x==0){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "Found" << endl;
    }else{
        cout << "Nothing" << endl;
    }
    // printf("%d\n", N);
    return 0;
}