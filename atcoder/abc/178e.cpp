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
    int x[n], y[n];
    int z[n], w[n];
    rep(i, n){
        cin >> x[i] >> y[i];
        z[i] = x[i] + y[i];
        w[i] = x[i] - y[i];
    }

    int maxz=-INF, minz = INF, maxw=-INF, minw=INF;
    rep(i, n){
        chmax(maxz, z[i]);
        chmin(minz, z[i]);
        chmax(maxw, w[i]);
        chmin(minw, w[i]);
    }

    cout << max(maxz-minz, maxw-minw) << endl;
    // printf("%d\n", N);
    return 0;
}