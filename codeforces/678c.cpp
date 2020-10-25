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

ll modfact(ll n){
    ll ans = 1;
    for (ll i = 1; i <= n; i++){   
        ans *= i;
        ans %= MOD;
    }
    return ans;
}


int main(){
    int n, x, pos;
    cin >> n >> x >> pos;

    int l=0, r=n;
    int big=0, small=0;
    while(true){
        int m = (l+r)/2;
        if(m>pos){
            big++;
            r = m;
        }else if(m<pos){
            small++;
            l = m+1;
        }else if(m==pos){
            break;
        }
    }

    int bigs = n-x, smalls = x-1;
    ll ans = 1;
    rep(i, big){
        ans *= bigs-i;
        ans %= MOD;
    }
    rep(i, small){
        ans *= smalls-i;
        ans %= MOD;
    }
    
    cout << ans * modfact(n-big-small-1) % MOD<< endl;
    // printf("%d\n", N);
    return 0;
}