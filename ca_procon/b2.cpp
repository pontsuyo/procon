#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    rep(iii, t){
        int n, m, q;
        cin >> n >> m >> q;

        bool v[m] = {};

        rep(ii, n){
            int l, r;
            cin >> l >> r;
            for (int i = l-1; i < r; i++){
                v[i] = true;
            }
        }

        vector<P> ans;

        rep(i, m){
            rep(j, )
        }
    }
    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}