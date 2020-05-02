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
#define LLINF (ll) 2e18

int aa[50];
int kk[50];


ll mpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

int main(){
    ll n, k;
    cin >> n >> k;

    ll a[n];
    rep(i, n) cin >> a[i];

    rep(i, n){
        int ta = a[i];
        rep(j, 49){
            if(ta %2==1) aa[j]++;
            ta /= 2;
        }
    }

    for (int i = 49 ; i >=0; i--){
        if(aa[i] < n-aa[i]){
            if(k >= mpow(2, i)){
                kk[i] = 1;
                k -= mpow(2, i);
            }
        }
    }

    ll kkk = 0;
    rep(i, 49) if(kk[i]==1) kkk += mpow(2, i);

    ll ans = 0;
    rep(i, n){
        ans += kkk^a[i];
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}