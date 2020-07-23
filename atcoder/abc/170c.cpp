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
    int x, n;
    cin >> x >> n;
    int ans = 101;
    int d = INF;
    int p[n];
    rep(i, n) cin >> p[i];


    repr(i, 0, 101){
        bool ok = true;
        rep(j, n){
            if(i==p[j]){
                ok=false;
                break;
            }
        }
        if(!ok) continue;

        if(abs(x-i) < d){
            ans = i;
            d = abs(x-i);
        }
    }
    cout << ans << endl;
    return 0;
}