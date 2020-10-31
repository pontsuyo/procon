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
    int t;
    cin >> t;
    rep(ti, t){
        double x[4], y[4];
        rep(i, 4) cin >> x[i] >> y[i];

        double dx1 = x[1] - x[0], dx2 = x[3]-x[2];
        double dy1 = y[1] - y[0], dy2 = y[3]-y[2];
        if(dx1*dy2==dx2*dy1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}