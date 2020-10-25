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
    int N = 2*n;
    int d[n];
    rep(i, n) d[i] = INF;

    int a[N];
    rep(i, N){
        cin >> a[i];
        a[i]--;
    }

    rep(i, N){
        if(d[a[i]]!=INF){
            d[a[i]] = i-d[a[i]]-1;
        }else{
            d[a[i]] = i;
        }
    }

    // rep(i, n) printf("%d ", d[i]);

    sort(d, d+n);

    // rep(i, n) printf("%d ", d[i]);

    int ans[N-1];
    rep(k, N-1) ans[k] = upper_bound(d, d+n, 0) - upper_bound(d, d+n, -1);
    for (int k = 0; k < N-2; k++)
    {
        int cnt = upper_bound(d, d+n, k+1) - upper_bound(d, d+n, k);
        ans[k+1] = ans[k] + cnt;
    }
    
    rep(i, N-1){
        cout << ans[i] << endl;
    }
    // printf("%d\n", N);
    return 0;
}