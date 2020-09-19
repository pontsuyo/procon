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
    int l[n];
    rep(i, n) cin >> l[i];

    // sort(l, l+n);

    int ans = 0;
    rep(i, n) rep(j, n)rep(k, n){
        if(!(i<j && j < k)) continue;
        if(l[i]==l[j] || l[k]==l[j] || l[i]==l[k]) continue;
        if(l[i] +l[j] > l[k] && abs(l[i]-l[j]) < l[k]) ans++;
        // if(l[i] +l[j] > l[k]) ans++;
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}