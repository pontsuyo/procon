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
    if(k<0) k = -k;

    ll ans = 0;

    ll c[2*n+5];
    repr(i, 2, 2*n){
        c[i] = n-abs(i-(n+1));
    }

    repr(i, 2, 2*n-k){
        ans += c[i] * c[i+k];
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}