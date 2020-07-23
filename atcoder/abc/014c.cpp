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

int cnt[1000005];

int main(){
    int n;
    cin >> n;
    rep(i, n){
        int a, b;
        cin >> a >> b ;
        cnt[a]++;
        cnt[++b]--;
    }

    int ans = 0;
    int tmp = 0;
    rep(i, 1000002){
        tmp += cnt[i];
        chmax(ans, tmp);
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}