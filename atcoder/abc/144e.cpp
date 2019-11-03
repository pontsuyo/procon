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
    int n; cin >> n;
    ll kk, k; cin >> k;
    
    ll sa = 0;

    int a[n], aa[n], f[n];
    rep(i, n){
        cin >> a[i];
        sa += a[i];
    }
    rep(i, n) cin >> f[i];

    if(sa <= k){
        cout << 0 << endl;
        return 0;
    }

    sort(f, f+n);
    sort(a, a+n);
    reverse(a, a+n);
    // reverse(f, f+n);

    ll l=0, r=1e12;
    while(r-l>1){
        ll mid = (l+r)/2;

        rep(i, n){
            aa[i] = a[i];
        }

        ll cnt = 0;
        rep(i, n){
            cnt += max(0LL, a[i]-mid/f[i]);
        }
        if(cnt > k){
            l = mid;
        }else{
            r = mid;
        }
    }
    cout << r << endl;
    // printf("%d\n", N);
    return 0;
}