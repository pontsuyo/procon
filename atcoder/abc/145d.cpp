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

ll mpow(ll x, ll n){
    ll ans = 1;
    while(n != 0){
        if(n&1) ans = ans*x % MOD;
        x = x*x % MOD;
        n = n >> 1;
    }
    return ans;
}

int main(){
    int x, y;
    cin >> x >> y;

    if((x+y)%3==0) {
        int c = (x+y)/3;
        int t = c*2 - y;
        if(t>=0 && t <= y){
            ll ans = 1;
            rep(i, c){
                ans *= i+1;
                ans %= MOD;
            }
            rep(i, c-t){
                ans *= mpow(i+1, MOD-2)%MOD;
                ans %= MOD;
            }
            rep(i, t){
                ans *= mpow(i+1, MOD-2)%MOD;
                ans %= MOD;
            }
            cout << ans << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}    
