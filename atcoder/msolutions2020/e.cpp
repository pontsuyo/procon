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
    int x[n], y[n], p[n];
    rep(i, n) cin >> x[i] >> y[i] >> p[i];

    // set<int> sx, sy;
    // rep(i, n){
    //     sx.insert(x[i]);
    //     sy.insert(y[i]);
    // }

    map<int, int> mx, my;
    rep(i, n){
        mx[x[i]] = 1;
        my[y[i]] = 1;
    }

    ll ans = LLINF;

    repr(k, 0, n){
        ll tmp = 0;
        while(true){
            
        }

        chmin(ans, tmp);
    }
    

    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}