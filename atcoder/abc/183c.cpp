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

bool used[10];

int main(){
    int n, k;
    cin >> n >> k;
    int t[n][n];
    rep(i, n) rep(j, n) cin >> t[i][j];


    vector<int> v;
    rep(i, n-1){
        v.emplace_back(i+1);
    }

    int tmp;
    int ans = 0;
    do {
        tmp = 0;
        int ti = 0;
        for (auto &&vi : v)
        {
            tmp += t[ti][vi];
            ti = vi;
        }
        tmp += t[ti][0];
        if(tmp==k) ans++;
    } while (next_permutation(v.begin(), v.end()));


    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}