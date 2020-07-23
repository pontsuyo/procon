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

ll modpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    map<double, ll> m;
    rep(i, n){
        ll a, b;
        cin >> a >> b;
        double c = (double) a/b;
        m[c]++;
        // m[-(double)1/c]++;
    }

    // for (auto mi : m){
    //     printf("%lf, %d\n", mi.first, mi.second);    
    // }
    
    map<ll, ll> mn;
    ll cnttmp = 0;
    for (auto cc : m){
        ll cnt = 0;
        // if(cc.second>1){

        //     cnt += cc.second *(cc.second-1)/2;
        // }
        double tmp = cc.first;
        int tmpn = m[-(double)1/tmp];
        if(tmpn>=1){
            cnt = cc.second * tmpn;
        }
        if(cnt>0) mn[cnt]++;
        
    }

    for (auto mi : mn){
        mi.second = mi.second/2;
        // printf("%d, %d\n", mi.first, mi.second);    
        cnttmp += mi.first * mi.second;
    }


    ll cnt2 = cnttmp * cnttmp;
    for (auto mi : mn){
        cnt2 -= mi.first * mi.first * mi.second;
    }

    // printf("%d\n", cnt2);
    // cnt2 /= 2;
    // printf("%d\n", cnt2);
    ll ans = 0;
    ans += modpow(2, n);
    ans -= modpow(2, n-2) * cnttmp;
    ans += modpow(2, n-4) * cnt2;
    if(cnttmp%2==0){
        ans += modpow(2, 0);
    }else{
        ans -= modpow(2, 0);
    }
    ans -= 1;

    ans = (ans + MOD*2)%MOD;
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}